#include "viewrecipient.h"
#include "ui_viewrecipient.h"
#include <QTableWidget>
#include <QVBoxLayout>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>
#include <QSqlTableModel>



viewRecipient::viewRecipient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewRecipient)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint | Qt::WindowCloseButtonHint);

    connect(ui->tableView, &QTableView::doubleClicked, this, &viewRecipient::onProjectDoubleClick);




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


    ui->tableView->setColumnWidth(0, 970);
    ui->tableView->setColumnWidth(1,0);


}

viewRecipient::~viewRecipient()
{
    delete ui;
}


int viewRecipient::retrieveTableIDFromDatabase(const QString& projectName)
{

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
     db.setDatabaseName("D:/database.sqlite");
    if (!db.open()) {
        qWarning() << "Failed to open database";
        return -1;
    }


    QSqlQuery query;
    query.prepare("SELECT TableID FROM Recipient_Map WHERE Recipients_Name = 'Mayank' ");

    if (!query.exec()) {
        qWarning() << "Failed to execute query";
        return -1;
    }


    if (query.next()) {
        return query.value(0).toInt();
    } else {
        qWarning() << "No matching rows found";
        return -1;
    }



}


void viewRecipient::onProjectDoubleClick(const QModelIndex& index)
{





    int row = index.row();


       QSqlQuery query;
       query.exec("SELECT COUNT(DISTINCT project_name) FROM Recipients_Map");


       unsigned long long int numProjects = 0;
       if (query.next()) {
           numProjects = query.value(0).toInt();
       }


       QString productTableName = ui->tableView->model()->data(ui->tableView->model()->index(row, 1)).toString();


       QString projectName = ui->tableView->model()->data(ui->tableView->model()->index(row, 0)).toString();
       qDebug()<<projectName;


       QSqlTableModel *prodModel = new QSqlTableModel(this);
       prodModel->setTable(productTableName);
       prodModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
       prodModel->select();


       ui->tableView_2->setModel(prodModel);
       ui->tableView_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
       ui->tableView_2->resizeColumnsToContents();


       prodModel->insertRows(0, numProjects - prodModel->rowCount());
}


void viewRecipient::on_pushButton_cancel_clicked()
{
    connect(ui->pushButton_cancel, &QPushButton::clicked, this, &QDialog::reject);
}
