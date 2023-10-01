#include "viewinvo.h"
#include "ui_viewinvo.h"
#include <QTableWidget>
#include <QVBoxLayout>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QCompleter>
#include <QSqlRecord>
#include <QSqlQueryModel>
#include <QSortFilterProxyModel>
#include <QStringList>
#include <QMessageBox>
#include <QInputDialog>
viewInvo::viewInvo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewInvo)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint | Qt::WindowCloseButtonHint);

    ui->comboBox->addItem("Inv. Number");
    ui->comboBox->addItem("Part Number");
    ui->comboBox->addItem("Date");
    ui->comboBox->addItem("Qty Added");
    ui->comboBox->addItem("Manufacturer");
    ui->comboBox->addItem("Remarks");





    ui->pushButton_Date->hide();
    ui->pushButton_invo->hide();
    ui->pushButton_Manufacturer->hide();
    ui->pushButton_PartNo->hide();
    ui->pushButton_QTY->hide();
  //  ui->pushButton_Comment->hide();



          QSqlQueryModel * modal = new QSqlQueryModel();
          QSqlQuery *qry = new QSqlQuery();

          qry->prepare("select * from Invoices");


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
              ui->tableView->setColumnWidth(3, 307);
              ui->tableView->setColumnWidth(4, 307);
              ui->tableView->setColumnWidth(5, 307);






              QString queryStr = "SELECT  Invoice_Number, Part_Number, "
                                 " Manufacturer, Date, Comment, "
                                 " Qty_Added, Project FROM Invoices;";

              QSqlQuery query;
              QStringList rowData;

              if (query.exec(queryStr)) {
                  while (query.next()) {
                      for (int i = 0; i < query.record().count(); ++i) {
                          QString value = query.value(i).toString();
                          rowData.append(value);
                      }
                  }

                  QCompleter *completer = new QCompleter(rowData, this);
                  completer->setCaseSensitivity(Qt::CaseInsensitive);
                  ui->lineEdit->setCompleter(completer);
              } else {
                  qDebug() << "Error executing the query:" << query.lastError().text();
              }
}

viewInvo::~viewInvo()
{
    delete ui;
}

void viewInvo::on_pushButton_refresh_clicked()
{





    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery();

    qry->prepare("select * from Invoices");


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
        ui->tableView->setColumnWidth(3, 307);
        ui->tableView->setColumnWidth(4, 307);
        ui->tableView->setColumnWidth(5, 307);

}



void viewInvo::on_pushButton_8_clicked()
{



    QString searchText = ui->lineEdit->text();


       QSqlQueryModel *model = new QSqlQueryModel();


       QSqlQuery query;
       query.prepare("SELECT * FROM Invoices WHERE Invoice_Number LIKE :searchText OR Part_Number LIKE :searchText OR Manufacturer LIKE :searchText OR QTY_Added LIKE :searchText OR Date LIKE :searchText OR Date LIKE :searchText");
       query.bindValue(":searchText", "%" + searchText + "%");
       query.exec();


       model->setQuery(query);
       ui->tableView->setModel(model);

    }





void viewInvo::on_pushButton_invo_clicked()
{


    QModelIndexList selectedIndexes = ui->tableView->selectionModel()->selectedIndexes();
       if (selectedIndexes.isEmpty()) {
           QMessageBox::warning(this, "Warning", "Please select a Recipient to rename.");
           return;
       }

       long long int row = selectedIndexes.first().row();

       QString oldInvoiceNumber = ui->tableView->model()->data(ui->tableView->model()->index(row, 0)).toString();


       QString newInvoiceNumber = QInputDialog::getText(this, "Rename Recipient", "Enter new name:", QLineEdit::Normal, oldInvoiceNumber);
       if (newInvoiceNumber.isEmpty()) {
           return;
       }


       QSqlQuery query;
       query.prepare("UPDATE Invoices SET Invoice_Number=:newInvoiceNumber WHERE Invoice_Number=:oldInvoiceNumber");
       query.bindValue(":newInvoiceNumber", newInvoiceNumber);
       query.bindValue(":oldInvoiceNumber", oldInvoiceNumber);
       if (!query.exec()) {
           QMessageBox::warning(this, "Error", "Failed to update recipient name in the database: " + query.lastError().text());
           return;
       }
       else{
           QMessageBox::information(this,"Success","Information changed Successfully : ");
       }

       // Update the recipient name in the table view
       ui->tableView->model()->setData(ui->tableView->model()->index(row, 0), newInvoiceNumber);


}

void viewInvo::on_pushButton_Manufacturer_clicked()
{


    QModelIndexList selectedIndexes = ui->tableView->selectionModel()->selectedIndexes();
       if (selectedIndexes.isEmpty()) {
           QMessageBox::warning(this, "Warning", "Please select a Recipient to rename.");
           return;
       }

       long long int row = selectedIndexes.first().row();

       QString oldManufacturer = ui->tableView->model()->data(ui->tableView->model()->index(row, 2)).toString();


       QString newManufacturer = QInputDialog::getText(this, "Rename Manufacturer", "Enter new name:", QLineEdit::Normal, oldManufacturer);
       if (newManufacturer.isEmpty()) {
           return;
       }


       QSqlQuery query;
       query.prepare("UPDATE Invoices SET Manufacturer=:newManufacturer WHERE Manufacturer=:oldManufacturer");
       query.bindValue(":newManufacturer", newManufacturer);
       query.bindValue(":oldManuFacturer", oldManufacturer);
       if (!query.exec()) {
           QMessageBox::warning(this, "Error", "Failed to update Manufacturer in the database: " + query.lastError().text());
           return;
       }
       else{
           QMessageBox::information(this,"Success","Information changed Successfully : ");
       }


       ui->tableView->model()->setData(ui->tableView->model()->index(row, 2), newManufacturer);

}

void viewInvo::on_pushButton_PartNo_clicked()
{
    QModelIndexList selectedIndexes = ui->tableView->selectionModel()->selectedIndexes();
       if (selectedIndexes.isEmpty()) {
           QMessageBox::warning(this, "Warning", "Please select a Recipient to rename.");
           return;
       }

       long long int row = selectedIndexes.first().row();

       QString oldPartNumber = ui->tableView->model()->data(ui->tableView->model()->index(row, 1)).toString();


       QString newPartNumber = QInputDialog::getText(this, "Rename Recipient", "Enter new name:", QLineEdit::Normal, oldPartNumber);
       if (newPartNumber.isEmpty()) {
           return;
       }


       QSqlQuery query;
       query.prepare("UPDATE Invoices SET Part_Number=:newPartNumber WHERE Part_Number=:oldPartNumber");
       query.bindValue(":newPartNumber", newPartNumber);
       query.bindValue(":oldPartNumber", oldPartNumber);
       if (!query.exec()) {
           QMessageBox::warning(this, "Error", "Failed to update Part Number in the database: " + query.lastError().text());
           return;
       }
       else{
           QMessageBox::information(this,"Success","Information changed Successfully : ");
       }


       ui->tableView->model()->setData(ui->tableView->model()->index(row, 1), newPartNumber);
}



void viewInvo::on_pushButton_Date_clicked()
{


    QModelIndexList selectedIndexes = ui->tableView->selectionModel()->selectedIndexes();
       if (selectedIndexes.isEmpty()) {
           QMessageBox::warning(this, "Warning", "Please select a Date to rename.");
           return;
       }

       long long int row = selectedIndexes.first().row();

       QString oldDate = ui->tableView->model()->data(ui->tableView->model()->index(row, 4)).toString();


       QString newDate = QInputDialog::getText(this, "Rename Date", "Enter Date:", QLineEdit::Normal, oldDate);
       if (newDate.isEmpty()) {
           return;
       }


       QSqlQuery query;
       query.prepare("UPDATE Invoices SET Date=:newInvoiceNumber WHERE Date=:oldDate");
       query.bindValue(":newDate", newDate);
       query.bindValue(":oldDate", oldDate);
       if (!query.exec()) {
           QMessageBox::warning(this, "Error", "Failed to update Date in the database: " + query.lastError().text());
           return;
       }
       else{
           QMessageBox::information(this,"Success","Information changed Successfully : ");
       }


       ui->tableView->model()->setData(ui->tableView->model()->index(row, 4), newDate);


}



void viewInvo::on_pushButton_Comment_clicked()
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
            query.prepare("DELETE FROM Invoices WHERE Invoice_Number = :partNumber");

            for (const QModelIndex& selectedIndex : selectedIndexes) {
                int row = selectedIndex.row();
                QModelIndex modelIndex = ui->tableView->model()->index(row, 0);  // Get the model index for the first column of the current row
                QString partNumber = modelIndex.data().toString();
                query.bindValue(":partNumber", partNumber);

                if (!query.exec()) {
                    QMessageBox::critical(nullptr, "Error", "Failed to delete selected parts from the database.");
                    deleteDialog.reject();
                    return;
                }

                // Delete the corresponding row from "Invoices" table

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



void viewInvo::on_pushButton_QTY_clicked()
{
    QModelIndexList selectedIndexes = ui->tableView->selectionModel()->selectedIndexes();
       if (selectedIndexes.isEmpty()) {
           QMessageBox::warning(this, "Warning", "Please select a Recipient to rename.");
           return;
       }

       long long int row = selectedIndexes.first().row();

       QString oldQtyAdded = ui->tableView->model()->data(ui->tableView->model()->index(row, 3)).toString();


       QString newQtyAdded = QInputDialog::getText(this, "Rename QTY", "Enter new name:", QLineEdit::Normal, oldQtyAdded);
       if (newQtyAdded.isEmpty()) {
           return;
       }


       QSqlQuery query;
       query.prepare("UPDATE Invoices SET Qty_Added=:newQtyAdded WHERE Qty_Added=:oldQtyAdded");
       query.bindValue(":newQtyAdded", newQtyAdded);
       query.bindValue(":oldQtyAdded", oldQtyAdded);
       if (!query.exec()) {
           QMessageBox::warning(this, "Error", "Failed to update QTY in the database: " + query.lastError().text());
           return;
       }
       else{
           QMessageBox::information(this,"Success","Information changed Successfully : ");
       }


       ui->tableView->model()->setData(ui->tableView->model()->index(row, 3), newQtyAdded);
}
