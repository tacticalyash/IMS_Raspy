#include "partstracker.h"
#include "ui_partstracker.h"
#include <QTableWidget>
#include <QVBoxLayout>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>
#include <QStringListModel>
#include <QCompleter>



partsTracker::partsTracker(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::partsTracker)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint | Qt::WindowCloseButtonHint);




    ui->comboBox->addItem("Part Number");
   ui->comboBox->addItem("Manufacturer");
   ui->comboBox->addItem("Project Assigned");
   ui->comboBox->addItem("Quantity");


    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery();




    qry->prepare("select * from Parts_Tracker");

    if (!qry->exec()) {

        qDebug() <<"qry not working";
        return;
    }

    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    ui->tableView->setHidden(false);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->setColumnWidth(0, 457);
    ui->tableView->setColumnWidth(1, 457);
    ui->tableView->setColumnWidth(2, 457);
    ui->tableView->setColumnWidth(3, 457);


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


}

partsTracker::~partsTracker()
{
    delete ui;
}

void partsTracker::on_pushButton_refresh_clicked()
{

    QSqlDatabase sdb = QSqlDatabase::addDatabase("QSQLITE");
      sdb.setDatabaseName("D:/database.sqlite");
     if (!sdb.open()) {
         qDebug() << "not opened";
         //return 1;
     }


    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery();

    qry->prepare("select * from Parts_Tracker");


    if (!qry->exec()) {

        return;
    }

    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    ui->tableView->setHidden(false);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->setColumnWidth(0, 457);
    ui->tableView->setColumnWidth(1, 457);
    ui->tableView->setColumnWidth(2, 457);
    ui->tableView->setColumnWidth(3, 457);


}

void partsTracker::on_pushButton_search_clicked()
{

    QSqlDatabase zdb = QSqlDatabase::addDatabase("QSQLITE");
     zdb.setDatabaseName("/home/pi/Desktop/database.sqlite");
     if (!zdb.open()) {
         qDebug() << "not opened";

     }

    QString searchText = ui->lineEdit->text();


       QSqlQueryModel *model = new QSqlQueryModel();


       QSqlQuery query;
       query.prepare("SELECT * FROM Parts_Tracker WHERE Part_Number LIKE :searchText OR  Manufacturer LIKE :searchText OR Project_Assigned LIKE :searchText OR Qty LIKE :searchText");
       query.bindValue(":searchText", "%" + searchText + "%");
       query.exec();

       model->setQuery(query);
       ui->tableView->setModel(model);
}
