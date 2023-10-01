#include "viewproject.h"
#include "ui_viewproject.h"
#include <QTableWidget>
#include <QVBoxLayout>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QDebug>
#include <QSqlTableModel>
#include <QModelIndex>
#include <QHeaderView>
#include <QSplitter>
ViewProject::ViewProject(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewProject)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint | Qt::WindowCloseButtonHint);





    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery();

    qry->prepare("select * from Project_Map");

    if (!qry->exec()) {

        return;
    }

    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    ui->tableView->setHidden(false);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->setColumnWidth(0, 1840);
    ui->tableView->setColumnWidth(1,0);

    connect(ui->tableView, &QTableView::doubleClicked, this, &ViewProject::onProjectDoubleClick);


}

ViewProject::~ViewProject()
{
    delete ui;
}

void ViewProject::on_pushButton_3_clicked()
{





    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery();

    qry->prepare("select * from Project_Map");

    if (!qry->exec()) {

        return;
    }

    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    ui->tableView->setHidden(false);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->setColumnWidth(0, 1840);
    ui->tableView->setColumnWidth(1,0);
}


int ViewProject::retrieveTableIDFromDatabase(const QString& projectName)
{




    QSqlQuery query;
    query.prepare("SELECT TableID FROM Project_Map WHERE Project_Name = 'F1' ");
    query.addBindValue(projectName);
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



void ViewProject::onProjectDoubleClick(const QModelIndex& index)
{
    int row = index.row();


       QSqlQuery query;
       query.exec("SELECT COUNT(DISTINCT project_name) FROM Project_Map");


       int numProjects = 0;
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



}

void ViewProject::on_pushButton_cancel_clicked()
{
     connect(ui->pushButton_cancel, &QPushButton::clicked, this, &QDialog::reject);
}
