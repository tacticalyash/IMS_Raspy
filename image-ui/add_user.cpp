#include "add_user.h"
#include "ui_add_user.h"
#include "addpartstoporject.h"
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>
#include <QPdfWriter>
#include <QPainter>
#include <QPdfWriter>
#include <QFile>
#include <QFileDialog>
#include <QDialogButtonBox>
#include <QDebug>
#include <QSqlTableModel>
#include <QStringListModel>
#include <QCompleter>
#include <QStandardItemModel>
#include <QSortFilterProxyModel>
#include <QSqlRecord>
#include <QFormLayout>
#include <QDate>
add_user::add_user(QString productTableName, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_user)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint | Qt::WindowCloseButtonHint);



    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery();

    qry->prepare("select * from Parts_Details");

    if (!qry->exec()) {

        return;
    }

    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    ui->tableView->setHidden(false);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->setColumnWidth(0, 307);
    ui->tableView->setColumnWidth(1, 307);
    ui->tableView->setColumnWidth(2, 307);
    ui->tableView->setColumnWidth(3, 0);
    ui->tableView->setColumnWidth(4, 0);
    ui->tableView->setColumnWidth(5, 0);
    ui->tableView->setColumnWidth(6, 0);
    ui->tableView->setColumnWidth(7, 0);
    ui->tableView->setColumnWidth(8, 0);




    QSqlTableModel *prodModel = new QSqlTableModel(this);
    prodModel->setTable(productTableName);

    prodModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    prodModel->select();

    ui->tableView_2->setModel(prodModel);
    ui->tableView_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    ui->tableView_2->resizeColumnsToContents();


    ui->comboBox_invent->addItem("Part Number");
    ui->comboBox_invent->addItem("Part Name");
    ui->comboBox_invent->addItem("Part Description");

    ui->comboBox_project->addItem("Part Number");
    ui->comboBox_project->addItem("Manufacturer");
    ui->comboBox_project->addItem("Allocated Quantity");
    ui->comboBox_project->addItem("Issued QTY");
    ui->comboBox_project->addItem("References");



    QAbstractItemModel* model = ui->tableView->model();


    QStringListModel* completerModel = new QStringListModel(this);


    QStringList completerData;
    for (long long int row = 0; row < model->rowCount(); ++row) {
        for (long long int col = 0; col < model->columnCount(); ++col) {
            QModelIndex index = model->index(row, col);
            QString text = model->data(index, Qt::DisplayRole).toString();
            completerData.append(text);
        }
    }
    completerModel->setStringList(completerData);


    QCompleter* completer = new QCompleter(completerModel, this);
    completer->setCaseSensitivity(Qt::CaseInsensitive);
    completer->setCompletionMode(QCompleter::PopupCompletion);

    ui->lineEdit->setCompleter(completer);
    ui->lineEdit_2->setCompleter(completer);





}

add_user::~add_user()
{
    delete ui;
}



void add_user::on_pushButton_moveTo_project_clicked()
{









    QSqlQueryModel* model = qobject_cast<QSqlQueryModel*>(ui->tableView_2->model());

    if (!model) {

        return;
    }


    QString tableName;


    QSqlQuery query = model->query();


    if (query.isActive() && query.isSelect()) {
        QString sql = query.lastQuery().trimmed().toLower();


        int pos = sql.indexOf(" from ");

        if (pos != -1) {

            tableName = sql.mid(pos + 6).trimmed().split(" ").at(0);
        }
    }


    QString displayedTable = tableName;


    long long int row = ui->tableView->currentIndex().row();

    if (row < 0)
    {
        QMessageBox::warning(this, tr("Error"), tr("Please select a row to edit."));
        return;
    }
    QString ManuFact,Allocation;
    QString partNumber = ui->tableView->model()->data(ui->tableView->model()->index(row, 0)).toString();
    QString qty = ui->tableView->model()->data(ui->tableView->model()->index(row, 9)).toString();

    QDialog editDialog(this);
    editDialog.setWindowTitle(tr("Export Part"));
    QFormLayout layout(&editDialog);

    QLineEdit* partNumberEdit = new QLineEdit(&editDialog);
    partNumberEdit->setText(partNumber);
    layout.addRow(tr("Part Number:"), partNumberEdit);

    QLineEdit* ManufacturerEdit = new QLineEdit(&editDialog);
    ManufacturerEdit->setText(ManuFact);
    layout.addRow(tr("Manufacturer:"), ManufacturerEdit);

    QSqlQuery query21;
    query21.prepare("SELECT Manufacturer FROM Invoices WHERE Part_Number = :partNumber");
    query21.bindValue(":partNumber", partNumber);

    if (query21.exec() && query21.next()) {
        QString manufacturer = query21.value(0).toString();
        ManufacturerEdit->setText(manufacturer);
    } else {
        ManufacturerEdit->setText(ManuFact);

    }




    QLineEdit* qtyEdit = new QLineEdit(&editDialog);
    qtyEdit->setText(qty);
    layout.addRow(tr("Quantity:"), qtyEdit);

    QLineEdit* Allocate_parts = new QLineEdit(&editDialog);
    Allocate_parts->setText(Allocation);
    layout.addRow(tr("Enter Quantity:"), Allocate_parts);



    QDialogButtonBox buttonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel,
                               Qt::Horizontal, &editDialog);
    layout.addRow(&buttonBox);

    connect(&buttonBox, &QDialogButtonBox::accepted, &editDialog, &QDialog::accept);
    connect(&buttonBox, &QDialogButtonBox::rejected, &editDialog, &QDialog::reject);

    if (editDialog.exec() != QDialog::Accepted)
    {
        return;
    }



    int existing_qty = is_part_exist(displayedTable,partNumberEdit->text(),"Allocated_Qty");
    int alc_qty = Allocate_parts->text().toInt();
    if(existing_qty != -1){

        auto total_qty = QString::number(existing_qty + alc_qty) ;


        update_part(displayedTable,partNumber,total_qty);

    }
    else{
        auto alc_qty_str = QString::number(alc_qty);
        insert_part(displayedTable,partNumber,ManufacturerEdit->text(),alc_qty_str);

    }

    update_part_inventory(partNumber,- alc_qty);
}

int add_user::is_part_exist(QString displayedTable,QString partN,QString qty_column){



    QSqlQuery query;
    query.prepare("SELECT * FROM "+ displayedTable + " WHERE Part_Number=:partN" );

    query.bindValue(":partN", partN);


    if (!query.exec()) {
        qWarning() << "Unable to execute query!";
        return false;
    }


    if(query.next()) {
        return query.value(qty_column).toInt();

    }
    else{
        return -1;
    }

    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery();

    qry->prepare("select * from Parts_Details");

    qry->exec();


    modal->setQuery(*qry);
}


void add_user::insert_part(QString displayedTable,QString partN,QString Manufact,QString Alloc_qty ){


    QSqlQuery query;
    query.prepare("INSERT INTO "+ displayedTable + " (Part_Number,Manufacturer,Allocated_Qty) VALUES (:partN,:Manufact,:Alloc_qty)" );

    query.bindValue(":partN", partN);
    query.bindValue(":Manufact", Manufact);
    query.bindValue(":Alloc_qty", Alloc_qty);



    if (!query.exec()) {
        qWarning() << "Unable to execute query!";
        return ;
    }

    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery();

    qry->prepare("select * from Parts_Details");

    qry->exec();


    modal->setQuery(*qry);


}

void add_user::update_part(QString displayedTable,QString partN,QString Alloc_qty){



    QSqlQuery query;
    query.prepare("UPDATE "+ displayedTable + " SET Allocated_Qty =:Alloc_qty WHERE Part_Number=:partN");
    query.bindValue(":partN", partN);
    query.bindValue(":Alloc_qty", Alloc_qty);



    if (!query.exec()) {
        qWarning() << "Unable to execute query!";
        return ;
    }


    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery();

    qry->prepare("select * from Parts_Details");

    qry->exec();


    modal->setQuery(*qry);
}

void add_user::update_part_inventory(QString partN,int change ){

    int existing_qty = is_part_exist("Parts_Details",partN,"QTY");

    if(existing_qty == -1){
        return;
    }
    QString final_qty = QString::number(existing_qty + change) ;

    QSqlQuery query;
    query.prepare("UPDATE Parts_Details SET QTY=:final_qty  WHERE Part_Number=:partN");
    query.bindValue(":partN", partN);
    query.bindValue(":final_qty", final_qty);



    if (!query.exec()) {
        qWarning() << "Unable to execute query!";
        return ;
    }
    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery();

    qry->prepare("select * from Parts_Details");

    qry->exec();


    modal->setQuery(*qry);


}


void add_user::on_pushButton_refresh_all_clicked()
{


    QSqlQueryModel* model = qobject_cast<QSqlQueryModel*>(ui->tableView_2->model());

    if (!model) {

        return;
    }


    QString tableName;


    QSqlQuery query = model->query();

    if (query.isActive() && query.isSelect()) {
        QString sql = query.lastQuery().trimmed().toLower();


        int pos = sql.indexOf(" from ");

        if (pos != -1) {

            tableName = sql.mid(pos + 6).trimmed().split(" ").at(0);
        }
    }

    QString displayedTable = tableName;

    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery();

    qry->prepare("select * from Parts_Details");

    qry->prepare("select * from ");

    if (!qry->exec()) {

        return;
    }

    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    ui->tableView->setHidden(false);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->setColumnWidth(0, 307);
    ui->tableView->setColumnWidth(1, 307);
    ui->tableView->setColumnWidth(2, 307);
    ui->tableView->setColumnWidth(3, 0);
    ui->tableView->setColumnWidth(4, 0);
    ui->tableView->setColumnWidth(5, 0);
    ui->tableView->setColumnWidth(6, 0);
    ui->tableView->setColumnWidth(7, 0);
    ui->tableView->setColumnWidth(8, 0);



    qry->prepare("select * from Parts_Details");

    qry->exec();


    modal->setQuery(*qry);

}

void add_user::on_pushButton_2_clicked()
{


    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery();

    qry->prepare("select * from Parts_Details");

    qry->exec();


    modal->setQuery(*qry);
}

void add_user::on_pushButton_search_inv_clicked()
{

    QString searchText = ui->lineEdit->text();


    QSqlQueryModel *model = new QSqlQueryModel();


    QSqlQuery query;
    query.prepare("SELECT * FROM Parts_Details WHERE Part_Number LIKE :searchText OR Part_Name LIKE :searchText OR Part_Description LIKE :searchText OR Min_Qty LIKE :searchText OR Value LIKE :searchText OR Footprint LIKE :searchText OR TempRange LIKE :searchText OR Location LIKE :searchText OR Grade LIKE :searchText");
    query.bindValue(":searchText", "%" + searchText + "%");
    query.exec();


    model->setQuery(query);
    ui->tableView->setModel(model);
}

void add_user::on_pushButton_allmove_inventory_clicked()
{



    QSqlQueryModel* model = qobject_cast<QSqlQueryModel*>(ui->tableView_2->model());

    if (!model) {

        return;
    }


    QString tableName;


    QSqlQuery query = model->query();


    if (query.isActive() && query.isSelect()) {
        QString sql = query.lastQuery().trimmed().toLower();


        int pos = sql.indexOf(" from ");

        if (pos != -1) {

            tableName = sql.mid(pos + 6).trimmed().split(" ").at(0);
        }
    }


    if (!tableName.isEmpty()) {
        QMessageBox::information(this, "Table Name", "Currently displayed table: " + tableName);
    } else {
        QMessageBox::warning(this, "Table Name", "Unable to determine the currently displayed table.");
    }
    QString displayedTable = tableName;


    long long int row = ui->tableView->currentIndex().row();
    if (row < 0)
    {
        QMessageBox::warning(this, tr("Error"), tr("Please select a row to edit."));
        return;
    }
    QString partNumber = ui->tableView->model()->data(ui->tableView->model()->index(row, 0)).toString();
    QString ManuFact = "";
    QString qty = ui->tableView->model()->data(ui->tableView->model()->index(row, 9)).toString();

    QDialog editDialog(this);
    editDialog.setWindowTitle(tr("Export Part"));
    QFormLayout layout(&editDialog);

    QLineEdit* partNumberEdit = new QLineEdit(&editDialog);
    partNumberEdit->setText(partNumber);
    layout.addRow(tr("Part Number:"), partNumberEdit);

    QLineEdit* ManufacturerEdit = new QLineEdit(&editDialog);
    ManufacturerEdit->setText(ManuFact);
    layout.addRow(tr("Manufacturer:"), ManufacturerEdit);

    QLineEdit* qtyEdit = new QLineEdit(&editDialog);
    qtyEdit->setText(qty);
    layout.addRow(tr("Quantity:"), qtyEdit);

    QLineEdit* Allocate_parts = new QLineEdit(&editDialog);
    Allocate_parts->setText("");
    layout.addRow(tr("Enter Quantity:"), Allocate_parts);

    QDialogButtonBox buttonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel,
                               Qt::Horizontal, &editDialog);
    layout.addRow(&buttonBox);

    connect(&buttonBox, &QDialogButtonBox::accepted, &editDialog, &QDialog::accept);
    connect(&buttonBox, &QDialogButtonBox::rejected, &editDialog, &QDialog::reject);

    editDialog.setFixedSize(1400, 1200);


    if (editDialog.exec() != QDialog::Accepted)
    {
        return;
    }

    QString newPartNumber = partNumberEdit->text();
    QString newQty = qtyEdit->text();
    query.prepare("SELECT COUNT(*) FROM " + displayedTable + " WHERE Part_number = ?");
    query.bindValue(0, newPartNumber);
    query.exec();
    query.next();
    int count = query.value(0).toInt();
    if (count == 0) {

        query.prepare("UPDATE " + displayedTable + " SET Part_number = ? WHERE Part_number = ?");
        query.bindValue(0, newPartNumber);
        query.bindValue(1, partNumber);
        query.exec();
    } else {

        QMessageBox::warning(this, tr("Duplicate Part"), tr("The part number is already in the database."));
    }



    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery();

    qry->prepare("select * from Parts_Details");

    qry->exec();


    modal->setQuery(*qry);

}



void add_user::openUiTwo() {


    QSqlQueryModel* model = qobject_cast<QSqlQueryModel*>(ui->tableView_2->model());

    if (!model) {

        return;
    }


    QString tableName;


    QSqlQuery query = model->query();


    if (query.isActive() && query.isSelect()) {
        QString sql = query.lastQuery().trimmed().toLower();


        int pos = sql.indexOf(" from ");

        if (pos != -1) {

            tableName = sql.mid(pos + 6).trimmed().split(" ").at(0);
        }
    }


}

void add_user::on_pushButton_issued_clicked()
{
    QSqlDatabase loginDB = QSqlDatabase::addDatabase("QSQLITE");
    loginDB.setDatabaseName("/home/pi/Desktop/database.sqlite");

    if (!loginDB.open()) {
        qDebug() << "FAILED !!";
        return;
    }


    QSqlQuery query(loginDB);

    long long int row = ui->tableView_2->currentIndex().row();

    if (row < 0) {
        QMessageBox::warning(this, tr("Error"), tr("Please select a row to edit."));
        return;
    }

    QString partNumber = ui->tableView_2->model()->data(ui->tableView_2->model()->index(row, 0)).toString();
    QString ManuFact = ui->tableView_2->model()->data(ui->tableView_2->model()->index(row, 1)).toString();
    QString QtyIssue = ui->tableView_2->model()->data(ui->tableView_2->model()->index(row, 3)).toString();
    QString ref_gt = ui->tableView_2->model()->data(ui->tableView_2->model()->index(row, 4)).toString();
    QString Comm = ui->tableView_2->model()->data(ui->tableView_2->model()->index(row, 9)).toString();


    QDialog editDialog(this);
    editDialog.setWindowTitle(tr("Issue Part"));
    QFormLayout layout(&editDialog);

    QSqlQueryModel* model = qobject_cast<QSqlQueryModel*>(ui->tableView_2->model());

    if (!model) {

        return;
    }


    QString tableName;
    QSqlQuery qrry = model->query();


    if (qrry.isActive() && qrry.isSelect()) {
        QString sql = qrry.lastQuery().trimmed().toLower();


        int pos = sql.indexOf(" from ");

        if (pos != -1) {

            tableName = sql.mid(pos + 6).trimmed().split(" ").at(0);
        }
    }




    QString displayedTable = tableName.toUpper();
    qDebug() << displayedTable;

    query.prepare("SELECT Project_Name FROM Project_Map WHERE TableID = :displayed_table_id");
    query.bindValue(":displayed_table_id", displayedTable);
    if (!query.exec()) {
        qDebug() << "Query execution failed.";

    }


    if (query.next()) {
        QString project_name = query.value(0).toString();
        qDebug() << "Project name: " << project_name;

        QLineEdit* projs = new QLineEdit(&editDialog);
        projs->setText(project_name);
        layout.addRow(tr("Project:"), projs);

        QLineEdit* partNumberEdit = new QLineEdit(&editDialog);
        partNumberEdit->setText(partNumber);
        layout.addRow(tr("Part Number:"), partNumberEdit);

        QLineEdit* ManufacturerEdit = new QLineEdit(&editDialog);
        ManufacturerEdit->setText(ManuFact);
        layout.addRow(tr("Manufacturer:"), ManufacturerEdit);


        QComboBox* recipient_Combo = new QComboBox(&editDialog);
        layout.addRow(tr("Recipient:"), recipient_Combo);

        if (query.exec("SELECT Recipients_Name FROM Recipient_Map")) {
            recipient_Combo->clear();
            while (query.next()) {
                QString recipientName = query.value(0).toString();
                recipient_Combo->addItem(recipientName);
            }
        } else {
            qDebug() << "Error executing SQL query:" << query.lastError().text();
        }

        QLineEdit* qtyIss = new QLineEdit(&editDialog);
        qtyIss->setText(QtyIssue);
        layout.addRow(tr("ISSUED Quantity:"), qtyIss);



        query.prepare("SELECT MRS_Number FROM MRS_Manager WHERE Part_Number = :partNumber AND Project = :project");
        query.bindValue(":partNumber", partNumber);
        query.bindValue(":project", project_name);
        if (!query.exec()) {
            qDebug() << "Query execution failed!";
            return;
        }

        if (query.next()) {
            QString mrsNos = query.value(0).toString();


        } else {
            qDebug() << "No matching row found!";
        }

        QString mrsNos = query.value(0).toString();


        QLineEdit* Mrs_no = new QLineEdit(&editDialog);
        Mrs_no->setText(mrsNos);
        layout.addRow(tr("MRS No:"), Mrs_no);

        QLineEdit* Date_box = new QLineEdit(&editDialog);
        QDate currentDate = QDate::currentDate();
        Date_box->setText(currentDate.toString("dd.MM.yyyy"));
        layout.addRow(tr("Date:"), Date_box);

        QLineEdit* ref = new QLineEdit(&editDialog);
        ref->setText(ref_gt);
        layout.addRow(tr("References:"), ref);

        QLineEdit* comments_box = new QLineEdit(&editDialog);
        comments_box->setText("");
        layout.addRow(tr("Comments:"), comments_box);

        QDialogButtonBox buttonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel, Qt::Horizontal, &editDialog);
        layout.addRow(&buttonBox);

        connect(&buttonBox, &QDialogButtonBox::accepted, &editDialog, &QDialog::accept);
        connect(&buttonBox, &QDialogButtonBox::rejected, &editDialog, &QDialog::reject);

        if (editDialog.exec() == QDialog::Accepted) {
            QString selected_recipient = recipient_Combo->currentText();

            QString tableIdQuery = "SELECT TableID FROM Recipient_Map WHERE Recipients_Name = '" + selected_recipient + "'";
            QSqlQuery tableIdQueryResult(tableIdQuery);

            if (tableIdQueryResult.next()) {
                QString tableId = tableIdQueryResult.value(0).toString();
                qDebug() << "Here is your tableid: " << tableId << endl;

                QSqlQuery qrd;
                qrd.prepare("INSERT INTO " + tableId + " (Project, Part_Number, Manufacturer, Date_Issued, Reference, Qty_Issued, Comments) VALUES (:Project, :Part_Number, :Manufacturer, :Date_issued , :Reference , :Qty_Issued , :Comments)");
                qrd.bindValue(":Project", project_name);
                qrd.bindValue(":Part_Number", partNumber);
                qrd.bindValue(":Manufacturer", ManuFact);
                qrd.bindValue(":Qty_Issued", qtyIss->text());
                qrd.bindValue(":Date_issued", currentDate);
                qrd.bindValue(":Reference", ref->text());
                qrd.bindValue(":Comments", comments_box->text());

                if (!qrd.exec()) {

                    QMessageBox::critical(this, "Error", "Data not saved. Error: " + qrd.lastError().text());
                } else {

                    QMessageBox::information(this, "Success", "Data has been saved successfully.");
                }


                QSqlQuery qrd1;
                qrd1.prepare("INSERT INTO MRS_Used (MRS_Number , Project , Part_Number , Manufacturer , Qty) VALUES (:MRS_Number , :Project , :Part_Number , :Manufacturer , :Qty)");
                qrd1.bindValue(":Project", project_name);
                qrd1.bindValue(":MRS_Number",mrsNos);
                qrd1.bindValue(":Part_Number", partNumber);
                qrd1.bindValue(":Manufacturer", ManuFact);
                qrd1.bindValue(":Qty", qtyIss->text());

                if (!qrd1.exec()) {

                    QMessageBox::critical(this, "Error", "Data not saved. Error: " + qrd.lastError().text());
                } else {

                    QMessageBox::information(this, "Success", "Data stored in MRS_Used table successfully");
                }


                QSqlQuery query1;
                query1.prepare("SELECT * FROM " + displayedTable + " WHERE Part_Number = :partName");
                query1.bindValue(":partName", partNumber);
                if (query1.exec()) {
                    if (query1.next()) {

                        if (query1.isNull("Issued_Qty")) {

                            query1.prepare("UPDATE " + displayedTable + " SET Issued_Qty = :qtyIssued WHERE Part_Number = :partName");
                            query1.bindValue(":qtyIssued", qtyIss->text());
                            query1.bindValue(":partName", partNumber);
                            if (query1.exec()) {

                                qDebug() << "Quantity issued updated for" << partNumber;
                            } else {

                                qDebug() << "Error updating quantity issued for" << partNumber << ":" << query1.lastError().text();
                            }
                        } else {

                            qDebug() << "Quantity already issued for" << partNumber;
                        }
                    } else {

                        qDebug() << "No row found for part name" << partNumber;
                    }
                } else {

                    qDebug() << "Error executing SELECT query:" << query1.lastError().text();
                }



            }
        }
    }

    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery();

    qry->prepare("select * from Parts_Details");

    qry->exec();


    modal->setQuery(*qry);
}
