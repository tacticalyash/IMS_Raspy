#include "partsquantityviwer.h"
#include "ui_partsquantityviwer.h"
#include <QTableWidget>
#include <QVBoxLayout>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>
#include <QCompleter>
#include <QStringListModel>
partsQuantityViwer::partsQuantityViwer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::partsQuantityViwer)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint | Qt::WindowCloseButtonHint);






    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery();

    qry->prepare("select * from View_QtyViewer");


    qry->exec();

    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    ui->tableView->setHidden(false);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->setColumnWidth(2, 300);
    ui->tableView->setColumnWidth(3,300);
    ui->tableView->setColumnWidth(4,300);
    ui->tableView->setColumnWidth(5,300);

    ui->comboBox->addItem("Part Number");
    ui->comboBox->addItem("Manufacturer");



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

partsQuantityViwer::~partsQuantityViwer()
{
    delete ui;
}

void partsQuantityViwer::on_pushButton_refresh_clicked()
{



    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery();

    qry->prepare("select * from View_QtyViewer");


    qry->exec();

    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    ui->tableView->setHidden(false);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->setColumnWidth(2, 300);
    ui->tableView->setColumnWidth(3,300);
    ui->tableView->setColumnWidth(4,300);
    ui->tableView->setColumnWidth(5,300);


}

void partsQuantityViwer::on_pushButton_search_clicked()
{


    QString searchText = ui->lineEdit->text();

       QSqlQueryModel *model = new QSqlQueryModel();

       QSqlQuery query;
       query.prepare("SELECT * FROM View_QtyViewer WHERE Part_Number LIKE :searchText OR  Manufacturer LIKE :searchText OR Min_Qty LIKE :searchText OR TotalQty LIKE :searchText  OR Available_Qty LIKE :searchText  OR AllocatedQty LIKE :searchText");
       query.bindValue(":searchText", "%" + searchText + "%");
       query.exec();


       model->setQuery(query);
       ui->tableView->setModel(model);
}

void partsQuantityViwer::on_pushButton_show_low_parts_clicked()
{


//low parts

}
