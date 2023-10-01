#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui/QScreen>
#include<QVBoxLayout>
#include "viewinvo.h"
#include "addnewpart.h"
#include "add_qty_part.h"
#include "add_user.h"
#include "delete_user.h"
#include "changelogincred.h"
#include "dialog.h"
#include "generatemrs.h"
#include "genisn.h"
#include "homepgg.h"
#include "loginbox.h"
#include "manageprojects.h"
#include "mrsslipviewer.h"
#include "partsquantityviwer.h"
#include "partstracker.h"
#include "partsviewer.h"
#include "viewinvoice.h"
#include "viewisn.h"
#include "viewproject.h"
#include "viewrecipient.h"
#include "managerecipients.h"
#include "edit_part.h"
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
#include <QVariant>
#include <QStandardItem>
#include <QItemEditorCreatorBase>
#include<QItemSelectionModel>
#include <QInputDialog>
#include <QCompleter>
#include <QFormLayout>
#include <QDialogButtonBox>
#include <QApplication>
#include <QTableView>
#include <QMenu>
#include <QAction>
#include <QClipboard>
#include <QModelIndex>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->menuBar->setDisabled(true);



    connect(this,&MainWindow::op,this,&MainWindow::openIndex_1);

    ui->stackedWidget->setCurrentIndex(0);

    ui->lineEdit->setEnabled(false);
    ui->lineEdit->setEnabled(false);
    ui->pushButton_search->setEnabled(false);
    ui->comboBox->setEnabled(false);
    ui->pushButton_refresh->setEnabled(false);
    ui->pushButton->setEnabled(false);
    ui->pushButton_editPart->setEnabled(false);


    connect(ui->actionView_Invoices, &QAction::triggered, this, &MainWindow::showViewInvoices);
    connect(ui->actionView_Parts_Tracker, &QAction::triggered, this, &MainWindow::showPartsTracker);

    connect(ui->actionAdd_Part_QTY, &QAction::triggered, this, &MainWindow::add_partt_QTYY);

    connect(ui->actionChange_Login_Credentials, &QAction::triggered, this, &MainWindow::changeLog);

    connect(ui->actionGenerate_ISN,&QAction::triggered, this, &MainWindow::GenInwardSN);

    connect(ui->actionView_Recipients, &QAction::triggered, this, &MainWindow::viewRecip);
    connect(ui->actionView_Project, &QAction::triggered, this, &MainWindow::viewProj);

    connect(ui->actionView_ISN, &QAction::triggered, this, &MainWindow::ViewInwardSN);

    connect(ui->actionView_MRS, &QAction::triggered, this, &MainWindow::viewMRSS);

    connect(ui->actionManage_recipients, &QAction::triggered, this, &MainWindow::manageRecip);

    connect(ui->actionManage_Project, &QAction::triggered, this, &MainWindow::manageProj);

    connect(ui->actionGenerate_MRS, &QAction::triggered, this, &MainWindow::GenMRSS);

    connect(ui->actionNew_Part, &QAction::triggered, this, &MainWindow::add_newPart);

    connect(ui->actionBackup_Database, &QAction::triggered, this, &MainWindow::DB_backup);

    connect(ui->actionView_Parts_Quantity, &QAction::triggered, this, &MainWindow::QTY_viewer);

    ui->comboBox->addItem("Part Number");
    ui->comboBox->addItem("Part Name");
    ui->comboBox->addItem("Part Description");
    ui->comboBox->addItem("Values");
    ui->comboBox->addItem("Footprint");
    ui->comboBox->addItem("Temp Range");
    ui->comboBox->addItem("Location");
    ui->comboBox->addItem("Grade");
    ui->comboBox->addItem("Project");



    setContextMenuPolicy(Qt::CustomContextMenu);
    connect(this, &MainWindow::customContextMenuRequested, this, &MainWindow::showContextMenu);

    ui->tableView->setContextMenuPolicy(Qt::CustomContextMenu);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);




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






    QString queryStr = "SELECT Part_Name, Part_Number, Part_Description, "
                       "Min_Qty, Value, Footprint, TempRange, Location, "
                       "Grade, QTY, Project FROM Parts_Details;";

    QSqlQuery query;
    QStringList rowData;

    if (query.exec(queryStr)) {
        QSqlRecord record = query.record();
        int columnCount = record.count();

        while (query.next()) {
            for (int i = 0; i < columnCount; ++i) {
                rowData.append(record.value(i).toString());
            }
        }

        QCompleter *completer = new QCompleter(this);
        completer->setCaseSensitivity(Qt::CaseInsensitive);
        QStringListModel *model = new QStringListModel(this);
        completer->setModel(model);
        ui->lineEdit->setCompleter(completer);

        // Update the model with the new data
        model->setStringList(rowData);
    } else {
        qDebug() << "Error executing the query:" << query.lastError().text();
    }





    add_user* addUserDialog = new add_user(nullptr);
    addUserDialog->setWindowFlags(Qt::Dialog);
    ui->actionEdit_Part->setVisible(false);
    ui->actionDelete_Part_2->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{


    QSqlQuery query;
    query.prepare("SELECT * FROM Parts_Details");
    if (!query.exec()) {
        qCritical() << "Failed to execute query:";
        return;
    } else {
        qDebug() << "Query executed successfully.";
    }


    QString filePath = QFileDialog::getSaveFileName(this, "Save CSV File", "", "CSV Files (*.csv)");
    if (filePath.isEmpty()) {
        qDebug() << "File save operation canceled.";
        return;
    }

    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qCritical() << "Failed to open output file:";
        return;
    } else {
        qDebug() << "File opened successfully.";
    }


    QTextStream out(&file);
    out.setCodec("UTF-8");


    QStringList headers;
    for (int i = 0; i < query.record().count(); i++) {
        headers.append(query.record().fieldName(i));
    }
    out << headers.join(",") << "\n";


    while (query.next()) {
        QStringList rowData;
        for (int i = 0; i < query.record().count(); i++) {
            rowData.append(query.value(i).toString());
        }
        out << rowData.join(",") << "\n";
    }

    file.close();
    QMessageBox::information(this,"Info","Sucessfully Saved");



}





void MainWindow::DB_backup() {
    QString currentDatabaseName = "D:/database.sqlite";
    QFileInfo fileInfo(currentDatabaseName);
    if (!fileInfo.exists()) {
        qCritical() << "Database file does not exist.";
        return;
    }

    QString backupFileName = "database_" + QDate::currentDate().toString("dd_MM_yyyy") + ".sqlite";
    QString backupFilePath = QFileDialog::getSaveFileName(this, "Save Backup File", backupFileName, "SQLite Database (*.sqlite)");

    if (backupFilePath.isEmpty()) {
        // User canceled the file selection
        return;
    }

    QFile currentFile(currentDatabaseName);
    if (!currentFile.open(QIODevice::ReadOnly)) {
        QMessageBox::critical(this, "ERROR", "Failed to open current database file for reading.");
        return;
    }

    QFile backupFile(backupFilePath);
    if (!backupFile.open(QIODevice::WriteOnly)) {
        QMessageBox::critical(this, "ERROR", "Failed to create backup file.");
        currentFile.close();
        return;
    }

    QByteArray data = currentFile.readAll();
    backupFile.write(data);

    currentFile.close();
    backupFile.close();

    QMessageBox::information(this, "INFO", "Database backup created successfully. Saved at: " + backupFilePath);
}


void MainWindow::showViewInvoices()
{

    viewInvo *viewInvoices = new viewInvo(this);


    viewInvoices->show();
}


void MainWindow::showPartsTracker()
{

    partsTracker *partsTrack = new partsTracker(this);


    partsTrack->show();
}

void MainWindow::showPartsQTY()
{

    partsQuantityViwer *partsQty = new partsQuantityViwer(this);


    partsQty->show();
}

void MainWindow::viewProj()
{

    ViewProject *viewPROJECT = new ViewProject(this);


    viewPROJECT->show();
}
void MainWindow::manageProj()
{



    manageProjects *manageProj = new manageProjects(this);
    manageProj->show();
}
void MainWindow::viewRecip()
{

    viewRecipient *viewRECIPI = new viewRecipient(this);


    viewRECIPI->show();
}
void MainWindow::manageRecip()
{

    manageRecipients *manageRECIPI = new manageRecipients(this);


    manageRECIPI->show();
}
void MainWindow::changeLog()
{

    changeLoginCred *changeLOGI= new changeLoginCred(this);


    changeLOGI->show();
}
void MainWindow::GenInwardSN()
{

    GenISN *genInwSN = new GenISN(this);


    genInwSN->show();
}
void MainWindow::ViewInwardSN()
{

    viewISN *viewInwSN = new viewISN(this);


    viewInwSN->show();
}
void MainWindow::GenMRSS()
{

    generateMRS *genMRS = new generateMRS(this);


    genMRS->show();
}
void MainWindow::viewMRSS()
{

    MRSslipViewer *viwMRS = new MRSslipViewer(this);


    viwMRS->show();
}
void MainWindow::add_newPart()
{

    addNewPart *addingNewPart = new addNewPart(this);

    addingNewPart->show();
}

void MainWindow::add_partt_QTYY()
{

    add_qty_part *addingpartQTY = new add_qty_part(this);


    addingpartQTY->show();
}


void MainWindow::QTY_viewer(){
    partsQuantityViwer *viewing_QTY = new partsQuantityViwer(this);

    viewing_QTY->show();
}




void MainWindow::on_authLogin_button_clicked()
{



    loginBox *startl = new loginBox;

    startl->show();
    hide();


}


void MainWindow::on_user_login(QString userName, QString userType)
{
    ui->label_5->setText("USERNAME: " + userName);
    ui->label_6->setText("USERTYPE: " + userType);
}


void MainWindow::on_LogOut_button_clicked()
{


    for(int i=0;i<8;i++){
        ui->menuBar->actions().at(i)->setEnabled(false);
    }
    ui->lineEdit->setEnabled(false);
    ui->lineEdit->setEnabled(false);
    ui->pushButton_search->setEnabled(false);
    ui->comboBox->setEnabled(false);
    ui->pushButton_refresh->setEnabled(false);
    ui->pushButton->setEnabled(false);

    ui->pushButton_editPart->setEnabled(false);
    ui->label_5->setText("USERNAME: NONE");
    ui->label_6->setText("USERTYPE: NONE");

    ui->stackedWidget->setCurrentIndex(0);


    QMessageBox::information(this, tr("Log Out"), tr("Successfully Logged Out!"));




}





void MainWindow::on_pushButton_search_clicked()
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

void MainWindow::on_pushButton_refresh_clicked()
{
    //to refresh the data


    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery();

    qry->prepare("select * from Parts_Details");

    qry->exec();


    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    ui->tableView->setHidden(false);
    ui->tableView->resizeColumnsToContents();
}


void MainWindow::enableMenuBar()
{

    for(int i=0;i<8;i++){

        ui->menuBar->actions().at(i)->setEnabled(true);
    }

    ui->lineEdit->setEnabled(true);
    ui->lineEdit->setEnabled(true);
    ui->pushButton_search->setEnabled(true);
    ui->comboBox->setEnabled(true);
    ui->pushButton_refresh->setEnabled(true);
    ui->pushButton->setEnabled(true);
    ui->pushButton_editPart->setEnabled(true);
    ui->label_5->setText("USERNAME:ADMIN");
}

void MainWindow::setMenuBarEnabled(bool enabled)
{
    ui->actionChange_Login_Credentials->setEnabled(enabled);
    ui->actionAdd_Part_QTY->setEnabled(enabled);

}

void MainWindow::setMenu()
{
    emit op();
}

void MainWindow::openIndex_1()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->menuBar->setDisabled(false);
    ui->lineEdit->setEnabled(true);
    ui->lineEdit->setEnabled(true);
    ui->pushButton_search->setEnabled(true);
    ui->comboBox->setEnabled(true);
    ui->pushButton_refresh->setEnabled(true);
    ui->pushButton->setEnabled(true);

    ui->pushButton_editPart->setEnabled(true);
    ui->label_5->setText("USERNAME:ADMIN");
    ui->label_6->setText("USERTYPE:SUPERUSER");

}



void MainWindow::on_pushButton_editPart_clicked()
{


    QModelIndexList selectedIndexes = ui->tableView->selectionModel()->selectedRows();
    if (selectedIndexes.isEmpty()) {

        return;
    }


    QModelIndex selectedIndex = selectedIndexes.first();
    QString partNumber = selectedIndex.sibling(selectedIndex.row(), 0).data().toString();
    QString partDescription = selectedIndex.sibling(selectedIndex.row(), 2).data().toString();
    QString partName = selectedIndex.sibling(selectedIndex.row(), 1).data().toString();
    QString grade = selectedIndex.sibling(selectedIndex.row(), 8).data().toString();
    QString project = selectedIndex.sibling(selectedIndex.row(), 10).data().toString();
    QString minQty = selectedIndex.sibling(selectedIndex.row(), 3).data().toString();
    QString availQty = selectedIndex.sibling(selectedIndex.row(), 9).data().toString();
    QString value = selectedIndex.sibling(selectedIndex.row(), 4).data().toString();
    QString footprint = selectedIndex.sibling(selectedIndex.row(), 5).data().toString();
    QString tempRange = selectedIndex.sibling(selectedIndex.row(), 6).data().toString();
    QString location = selectedIndex.sibling(selectedIndex.row(), 7).data().toString();


    QDialog editDialog(this);
    editDialog.setWindowTitle(tr("Edit Part"));

    QFormLayout layout(&editDialog);

    QLineEdit lineEditPartNumber(&editDialog);
    QLineEdit lineEditPartDescription(&editDialog);
    QLineEdit lineEditPartName(&editDialog);
    QLineEdit lineEditGrade(&editDialog);
    QLineEdit lineEditProject(&editDialog);
    QLineEdit lineEditMinQty(&editDialog);
    QLineEdit lineEditAvailQty(&editDialog);
    QLineEdit lineEditValue(&editDialog);
    QLineEdit lineEditFootprint(&editDialog);
    QLineEdit lineEditTempRange(&editDialog);
    QLineEdit lineEditLocation(&editDialog);

    layout.addRow(tr("Part Number:"), &lineEditPartNumber);
    layout.addRow(tr("Part Description:"), &lineEditPartDescription);
    layout.addRow(tr("Part Name:"), &lineEditPartName);
    layout.addRow(tr("Grade:"), &lineEditGrade);
    layout.addRow(tr("Project:"), &lineEditProject);
    layout.addRow(tr("Min Qty:"), &lineEditMinQty);
    layout.addRow(tr("Available Qty:"), &lineEditAvailQty);
    layout.addRow(tr("Value:"), &lineEditValue);
    layout.addRow(tr("Footprint:"), &lineEditFootprint);
    layout.addRow(tr("Temp Range:"), &lineEditTempRange);
    layout.addRow(tr("Location:"), &lineEditLocation);


    lineEditPartNumber.setText(partNumber);
    lineEditPartDescription.setText(partDescription);
    lineEditPartName.setText(partName);
    lineEditGrade.setText(grade);
    lineEditProject.setText(project);
    lineEditMinQty.setText(minQty);
    lineEditAvailQty.setText(availQty);
    lineEditValue.setText(value);
    lineEditFootprint.setText(footprint);
    lineEditTempRange.setText(tempRange);
    lineEditLocation.setText(location);

    QDialogButtonBox buttonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel, &editDialog);
    layout.addRow(&buttonBox);

    QObject::connect(&buttonBox, &QDialogButtonBox::accepted, [&]() {

        QString updatedPartNumber = lineEditPartNumber.text();
        QString updatedPartDescription = lineEditPartDescription.text();
        QString updatedPartName = lineEditPartName.text();
        QString updatedGrade = lineEditGrade.text();
        QString updatedProject = lineEditProject.text();
        QString updatedMinQty = lineEditMinQty.text();
        QString updatedAvailQty = lineEditAvailQty.text();
        QString updatedValue = lineEditValue.text();
        QString updatedFootprint = lineEditFootprint.text();
        QString updatedTempRange = lineEditTempRange.text();
        QString updatedLocation = lineEditLocation.text();


        QSqlQuery query;
        query.prepare("UPDATE Parts_Details SET "
                      "Part_Number = :updatedPartNumber, "
                      "Part_Description = :partDescription, "
                      "Part_Name = :partName, "
                      "Grade = :grade, "
                      "Project = :project, "
                      "Min_Qty = :minQty, "
                      "QTY = :availQty, "
                      "Value = :value, "
                      "Footprint = :footprint, "
                      "TempRange = :tempRange, "
                      "Location = :location "
                      "WHERE Part_number = :oldPartNumber");
        query.bindValue(":updatedPartNumber", updatedPartNumber);
        query.bindValue(":partDescription", updatedPartDescription);
        query.bindValue(":partName", updatedPartName);
        query.bindValue(":grade", updatedGrade);
        query.bindValue(":project", updatedProject);
        query.bindValue(":minQty", updatedMinQty);
        query.bindValue(":availQty", updatedAvailQty);
        query.bindValue(":value", updatedValue);
        query.bindValue(":footprint", updatedFootprint);
        query.bindValue(":tempRange", updatedTempRange);
        query.bindValue(":location", updatedLocation);
        query.bindValue(":oldPartNumber", partNumber);
        if (query.exec()) {

            QModelIndex updateIndex = selectedIndex.sibling(selectedIndex.row(), 0);
            ui->tableView->model()->setData(updateIndex, updatedPartNumber); // Update the part number
            ui->tableView->model()->setData(updateIndex.sibling(updateIndex.row(), 1), updatedPartName);
            ui->tableView->model()->setData(updateIndex.sibling(updateIndex.row(), 2), updatedPartDescription);
            ui->tableView->model()->setData(updateIndex.sibling(updateIndex.row(), 3), updatedMinQty);
            ui->tableView->model()->setData(updateIndex.sibling(updateIndex.row(), 4), updatedValue);
            ui->tableView->model()->setData(updateIndex.sibling(updateIndex.row(), 5), updatedFootprint);
            ui->tableView->model()->setData(updateIndex.sibling(updateIndex.row(), 6), updatedTempRange);
            ui->tableView->model()->setData(updateIndex.sibling(updateIndex.row(), 7), updatedLocation);
            ui->tableView->model()->setData(updateIndex.sibling(updateIndex.row(), 8), updatedGrade);
            ui->tableView->model()->setData(updateIndex.sibling(updateIndex.row(), 9), updatedAvailQty);
            ui->tableView->model()->setData(updateIndex.sibling(updateIndex.row(), 10), updatedProject);


            editDialog.accept();
            QMessageBox::information(nullptr, "Success", "Data has been updated successfully!");
        } else {


            QMessageBox::critical(nullptr, "Error", "Failed to update data.");
        }
    });

    editDialog.exec();




}

void MainWindow:: showContextMenu(const QPoint &pos)
{
    QPoint globalPos = mapToGlobal(pos);
    QItemSelectionModel *selectionModel = ui->tableView->selectionModel();
    QModelIndexList selectedIndexes = selectionModel->selectedIndexes();

    if (!selectedIndexes.isEmpty())
    {
        QMenu contextMenu;
        QAction copyAction("Copy", this);
        connect(&copyAction, &QAction::triggered, this, [this, selectedIndexes]() {
            QString selectedText;
            for (const QModelIndex &index : selectedIndexes) {
                selectedText += index.data().toString() + " ";
            }
            selectedText.chop(1); // Remove the trailing space
            QClipboard *clipboard = QApplication::clipboard();
            clipboard->setText(selectedText);
        });

        contextMenu.addAction(&copyAction);
        contextMenu.exec(globalPos);
    }
}
void MainWindow::on_pushButton_del_partt_clicked()
{

        QModelIndexList selectedIndexes = ui->tableView->selectionModel()->selectedRows();
        if (selectedIndexes.isEmpty()) {
            return;
        }

        QDialog deleteDialog(this);
        deleteDialog.setWindowTitle(tr("Delete Selected Parts"));

        QLabel deleteLabel(tr("Are you sure you want to delete the selected parts?"), &deleteDialog);
        QDialogButtonBox buttonBox(QDialogButtonBox::Yes | QDialogButtonBox::No, &deleteDialog);

        QVBoxLayout layout(&deleteDialog);
        layout.addWidget(&deleteLabel);
        layout.addWidget(&buttonBox);

        QObject::connect(&buttonBox, &QDialogButtonBox::clicked, [&](QAbstractButton* button) {
            if (button == buttonBox.button(QDialogButtonBox::Yes)) {
                QSqlQuery query;
                query.prepare("DELETE FROM Parts_Details WHERE Part_Number = :partNumber");

                for (const QModelIndex& selectedIndex : selectedIndexes) {
                    QString partNumber = selectedIndex.sibling(selectedIndex.row(), 0).data().toString();
                    query.bindValue(":partNumber", partNumber);
                    if (!query.exec()) {
                        QMessageBox::critical(nullptr, "Error", "Failed to delete selected parts from the database.");
                        deleteDialog.reject();
                        return;
                    }

                    // Delete the corresponding row from "Invoices" table
                    QSqlQuery invoicesQuery;
                    invoicesQuery.prepare("DELETE FROM Invoices WHERE Part_Number = :partNumber");
                    invoicesQuery.bindValue(":partNumber", partNumber);
                    if (!invoicesQuery.exec()) {
                        QMessageBox::critical(nullptr, "Error", "Failed to delete selected parts from the 'Invoices' table.");
                        deleteDialog.reject();
                        return;
                    }
                }

                for (const QModelIndex& selectedIndex : selectedIndexes) {
                    ui->tableView->model()->removeRow(selectedIndex.row());
                }

                QMessageBox::information(nullptr, "Success", "Selected parts have been deleted from the database!");
            }

            deleteDialog.accept();
        });

        deleteDialog.exec();


}
