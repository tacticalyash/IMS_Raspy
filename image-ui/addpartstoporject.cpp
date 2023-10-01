#include "addpartstoporject.h"
#include "ui_addpartstoporject.h"
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

addPartsToPorject::addPartsToPorject(const QString& partNumber,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addPartsToPorject)
{
    ui->setupUi(this);

    setWindowFlags(Qt::Window | Qt::WindowMinimizeButtonHint  | Qt::WindowCloseButtonHint);


    QSqlDatabase loginDB = QSqlDatabase::addDatabase("QSQLITE");

    loginDB.setDatabaseName("/home/pi/Desktop/database.sqlite");

    if(!loginDB.open()){
        qDebug()<<"FAILED !!";
    }
    else {
        qDebug()<<"Connected ...";
    }

     ui->lineEdit->setText(partNumber);

    QSqlQuery query;
    query.prepare("SELECT Manufacturer FROM Parts_Tracker");
    if(query.exec()) {
        while(query.next()) {

            QString columnData = query.value(0).toString();

            ui->comboBox->addItem(columnData);
        }
    } else {

        qDebug() << "Error fetching column data: " << query.lastError().text();
    }


       query.prepare("SELECT QTY FROM Parts_Details WHERE Part_Number = :partNumber");
       query.bindValue(":partNumber", partNumber);
       if(query.exec()) {
           if (query.next()) {
               QString qty = query.value(0).toString();
               ui->lineEdit_3->setText(qty);
           } else {
               qDebug() << "No data found for partNumber: " << partNumber;
           }
       } else {
           qDebug() << "Error fetching QTY data: " << query.lastError().text();
       }


    ui->comboBox->setEditable(true);


    ui->comboBox->setInsertPolicy(QComboBox::InsertPolicy::NoInsert);
    ui->comboBox->setMaxVisibleItems(ui->comboBox->count());




}

addPartsToPorject::~addPartsToPorject()
{
    delete ui;

}

void addPartsToPorject::on_pushButton_ok_clicked()
{

}

void addPartsToPorject::setStoredTable(const QString& table_name)
{
  Stored_table = table_name;


}
