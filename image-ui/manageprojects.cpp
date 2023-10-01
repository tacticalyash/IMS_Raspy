#include "manageprojects.h"
#include "ui_manageprojects.h"
#include "add_user.h"
#include <QTableWidget>
#include <QVBoxLayout>
#include <QStandardItemModel>
#include <QTableView>
#include <QFont>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>
#include <QMessageBox>
#include <QDateTime>
#include <QSqlTableModel>
#include <QItemSelectionModel>
#include <QModelIndexList>
#include <QStringListModel>
#include <QCompleter>
manageProjects::manageProjects(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::manageProjects)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint | Qt::WindowCloseButtonHint);






    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery();

    qry->prepare("select * from Project_Map");

    if (!qry->exec()) {
        //QMessageBox::critical(this, tr("Error"), qry->lastError().text());
        return;
    }

    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    ui->tableView->setHidden(false);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->setColumnWidth(0, 1900);
    ui->tableView->setColumnWidth(1,0);

    connect(ui->tableView, &QTableView::doubleClicked, this, &manageProjects::onProjectDoubleClick);

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

manageProjects::~manageProjects()
{
    delete ui;
}

void manageProjects::on_pushButton_add_project_clicked()
{
    QString projectName = ui->lineEdit->text().trimmed();


       QSqlQuery qry;
       qry.prepare("INSERT INTO Project_Map (Project_Name, TableID) VALUES (:projectName, :tableId)");
       qry.bindValue(":projectName", projectName);



       QDateTime currentTime = QDateTime::currentDateTime();
       QString tableId = "PRO_ID_" + currentTime.toString("dd_MM_yyyy_hh_mm_ss_zzz");


       qry.bindValue(":tableId", tableId);

       if(qry.exec()){

           QSqlQuery createTableQuery;
           createTableQuery.prepare("CREATE TABLE " + tableId + " (Part_Number TEXT, Manufacturer TEXT, Allocated_Qty TEXT, Issued_Qty TEXT,References_Of_Issed  TEXT)");
           if(createTableQuery.exec()) {
               QMessageBox::information(this, "Success", "New project added successfully.");
           } else {
               QMessageBox::critical(this, "Error", "Failed to create table for the new project.");
           }
       } else {
           QMessageBox::critical(this, "Error", "Failed to insert new project into project_map table.");
       }
}
void manageProjects::deleteProject(const QString& tableId)
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


    query.prepare("DELETE FROM Project_Map WHERE TableID = :tableId");
    query.bindValue(":tableId", tableId);
    query.exec();



    QString tableName = "project_" + tableId;
    query.prepare("DROP TABLE IF EXISTS " + tableName);
    if (!query.exec()) {
        qDebug() << "Failed to delete project table: " + tableName;
        db.rollback();
        return;
    }


    db.commit();

    QMessageBox::information(this, "Information", "Project deleted successfully");


}

void manageProjects::on_pushButton_Delete_project_clicked()
{

    QModelIndexList selectedIndexes = ui->tableView->selectionModel()->selectedIndexes();
    if (selectedIndexes.isEmpty()) {
        QMessageBox::warning(this, "Warning", "Please select a project to delete.");
        return;
    }

    int row = selectedIndexes.first().row();
    int column = 1;
    QString tableId = ui->tableView->model()->data(ui->tableView->model()->index(row, column)).toString();

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Delete Project", "Are you sure you want to delete the selected project?", QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {

        deleteProject(tableId);
    }
}




void manageProjects::on_pushButton_edit_project_clicked()
{
    QModelIndexList selectedIndexes = ui->tableView->selectionModel()->selectedIndexes();
        if (selectedIndexes.isEmpty())
        {
            // No row is selected, do nothing
            return;
        }


        int row = selectedIndexes.first().row();

           QSqlQuery query;
           query.exec("SELECT COUNT(DISTINCT project_name) FROM Project_Map");


           long long int numProjects = 0;
           if (query.next()) {
               numProjects = query.value(0).toInt();
           }

           QString productTableName = ui->tableView->model()->data(ui->tableView->model()->index(row, 1)).toString();




           QString pro_Name = ui->tableView->model()->data(ui->tableView->model()->index(row, 0)).toString();
                     qDebug()<<pro_Name;

        add_user us(productTableName);
        us.setModal(true);
        us.exec();



}

void manageProjects::onProjectDoubleClick(const QModelIndex& index)
{
    int row = index.row();

       QSqlQuery query;
       query.exec("SELECT COUNT(DISTINCT project_name) FROM Project_Map");


       QString productTableName = ui->tableView->model()->data(ui->tableView->model()->index(row, 1)).toString();




       QSqlTableModel *prodModel = new QSqlTableModel(this);
       prodModel->setTable(productTableName);

       prodModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
       prodModel->select();


       ui->tableView->setModel(prodModel);
       ui->tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
       ui->tableView->resizeColumnsToContents();

}

void manageProjects::on_pushButton_refresh_clicked()
{


    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery();

    qry->prepare("select * from Project_Map");

    qry->exec();

    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    ui->tableView->setHidden(false);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->setColumnWidth(0, 1900);
    ui->tableView->setColumnWidth(1,0);
}
