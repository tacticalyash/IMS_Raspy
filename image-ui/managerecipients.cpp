#include "managerecipients.h"
#include "ui_managerecipients.h"
#include <QTableWidget>
#include <QVBoxLayout>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>
#include <QSqlRecord>
#include <QDateTime>
#include <QMessageBox>
#include <QInputDialog>

manageRecipients::manageRecipients(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::manageRecipients)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint | Qt::WindowCloseButtonHint);

    QSqlDatabase sdb = QSqlDatabase::addDatabase("QSQLITE");
  sdb.setDatabaseName("D:/database.sqlite");
     if (!sdb.open()) {
         qDebug() << "not opened";

     }


    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery();

    qry->prepare("select * from Recipient_Map");


    if (!qry->exec()) {

        return;
    }

    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    ui->tableView->setHidden(false);
    ui->tableView->resizeColumnsToContents();


    ui->tableView->setColumnWidth(0,1870);
    ui->tableView->setColumnWidth(1,0);



    connect(ui->tableView, &QTableView::doubleClicked, [=](const QModelIndex& index) {

        QString recipientName = modal->record(index.row()).value("recipients_names").toString();


        int tableId = modal->record(index.row()).value("tableID").toInt();


        QSqlQueryModel *recipientModal = new QSqlQueryModel(this);
        QString queryStr = QString("SELECT * FROM table_%1").arg(tableId);
        recipientModal->setQuery(queryStr, sdb);


        if (recipientModal->rowCount() == 0) {
            qDebug() << "No records found for recipient" << recipientName;
            return;
        }

        QTableView *recipientView = new QTableView(this);
        recipientView->setModel(recipientModal);
        recipientView->setWindowTitle(recipientName);
        recipientView->resize(800, 600);
        recipientView->show();
    });


}

manageRecipients::~manageRecipients()
{
    delete ui;
}

void manageRecipients::on_pushButton_addRecipients_clicked()
{


    QString recipientName = ui->lineEdit->text().trimmed();


       QSqlQuery qry;
       qry.prepare("INSERT INTO Recipient_Map (Recipients_Name, TableID) VALUES (:recipientName, :tableId)");
       qry.bindValue(":recipientName", recipientName);



       QDateTime currentTime = QDateTime::currentDateTime();
       QString tableId = "REC_ID_" + currentTime.toString("dd_MM_yyyy_hh_mm_ss_zzz");

       qry.bindValue(":tableId", tableId);

       if(qry.exec()){

           QSqlQuery createTableQuery;
           createTableQuery.prepare("CREATE TABLE " + tableId + " (Project TEXT, Part_Number TEXT, Manufacturer TEXT, Qty_Issued TEXT,Date_Issued TEXT,Reference TEXT,Comments TEXT)");
           if(createTableQuery.exec()) {
               QMessageBox::information(this, "Success", "New project added successfully.");
           } else {
               QMessageBox::critical(this, "Error", "Failed to create table for the new recipient.");
           }
       } else {
           QMessageBox::critical(this, "Error", "Failed to insert new recipient into recipient_map table.");
       }
}

void manageRecipients::on_pushButton_rename_recipients_clicked()
{





    QModelIndexList selectedIndexes = ui->tableView->selectionModel()->selectedIndexes();
       if (selectedIndexes.isEmpty()) {
           QMessageBox::warning(this, "Warning", "Please select a Recipient to rename.");
           return;
       }

       int row = selectedIndexes.first().row();
       int column = 0;
       QString oldRecipientName = ui->tableView->model()->data(ui->tableView->model()->index(row, column)).toString();


       QString newRecipientName = QInputDialog::getText(this, "Rename Recipient", "Enter new name:", QLineEdit::Normal, oldRecipientName);
       if (newRecipientName.isEmpty()) {
           return;
       }


       QSqlQuery query;
       query.prepare("UPDATE Recipient_Map SET Recipients_Name=:newRecipientName WHERE Recipients_Name=:oldRecipientName");
       query.bindValue(":newRecipientName", newRecipientName);
       query.bindValue(":oldRecipientName", oldRecipientName);
       if (!query.exec()) {
           QMessageBox::warning(this, "Error", "Failed to update recipient name in the database: " + query.lastError().text());
           return;
       }

       // Update the recipient name in the table view
       ui->tableView->model()->setData(ui->tableView->model()->index(row, column), newRecipientName);

}

void manageRecipients::on_pushButton_edit_clicked()
{

}



void manageRecipients::deleteRecipients(const QString& tableId)
{


    QSqlDatabase db = QSqlDatabase::database();
    db.setDatabaseName("D:/database.sqlite");
    if (!db.isOpen()) {
        if (!db.open()) {
            qDebug() << "Failed to open database";
            return;
        }
    }


    QSqlQuery query;
    db.transaction();


    query.prepare("DELETE FROM Recipient_Map WHERE TableID = :tableId");
    query.bindValue(":tableId", tableId);
    if (!query.exec()) {
        qDebug() << "Failed to delete Recipient from recipeint_map table";
        db.rollback();
        return;
    }


    QString tableName = "project_" + tableId;
    query.prepare("DROP TABLE IF EXISTS " + tableName);
    if (!query.exec()) {
        qDebug() << "Failed to delete project table: " + tableName;
        db.rollback();
        return;
    }


    db.commit();


    QMessageBox::information(this, "Information", "Recipient deleted successfully");

}


void manageRecipients::on_pushButton_delete_recipients_clicked()
{

    QModelIndexList selectedIndexes = ui->tableView->selectionModel()->selectedIndexes();
    if (selectedIndexes.isEmpty()) {
        QMessageBox::warning(this, "Warning", "Please select a Recipient to delete.");
        return;
    }



    int row = selectedIndexes.first().row();
    int column = 1;
    QString tableId = ui->tableView->model()->data(ui->tableView->model()->index(row, column)).toString();


    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Delete Recipient", "Are you sure you want to delete the selected Recipient?", QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {

        deleteRecipients(tableId);
    }


}

void manageRecipients::on_pushButton_refresh_clicked()
{


    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery();

    qry->prepare("select * from Recipient_Map");


    if (!qry->exec()) {

        return;
    }

    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    ui->tableView->setHidden(false);
    ui->tableView->resizeColumnsToContents();

        // setting width of specific columns
    ui->tableView->setColumnWidth(0,1870);
    ui->tableView->setColumnWidth(1,0);


}
