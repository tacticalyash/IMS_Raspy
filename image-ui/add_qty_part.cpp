#include "add_qty_part.h"
#include "ui_add_qty_part.h"
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
#include <QDebug>
#include <QDateTime>
#include <QCompleter>
#include <QCalendarWidget>
#include <QDialog>
#include <QScreen>
#include <QVBoxLayout>
#include <QPainter>
add_qty_part::add_qty_part(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_qty_part)
{

    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::WindowMinimizeButtonHint  | Qt::WindowCloseButtonHint);




     QSqlQuery query;

     if (query.exec("SELECT Project_Name FROM Project_Map")) {
         QStringList rowData;
         while (query.next()) {
             QString partNumber = query.value(0).toString();
             rowData.append(partNumber);
         }
//         ui->lineEdit_projj->setText(rowData.join(' '));

         QCompleter *completer = new QCompleter(rowData, this);
         completer->setCaseSensitivity(Qt::CaseInsensitive);
         ui->lineEdit_projj->setCompleter(completer);
     } else {
         qDebug() << "Error executing the query:" << query.lastError().text();
     }

}

add_qty_part::~add_qty_part()
{
    delete ui;
}

void add_qty_part::on_pushButton_addPart_clicked()
{
    QSqlQuery qry,q4,q3;
    QString PartNum  ,Qty_Add , Date  ,Manufacturer ,Invoice_Num,Comment,Projects;

    PartNum =ui->lineEdit_partNo->text();

    Qty_Add=ui->lineEdit_QTY_add->text();
    Date=ui->lineEdit_date->text();
    Manufacturer =ui->lineEdit_manufacturer->text();
    Invoice_Num=ui->lineEdit_invoiceNum->text();
    Comment=ui->lineEdit_Comments->text();
    Projects=ui->lineEdit_projj->text();





    if (PartNum.isEmpty() || Qty_Add.isEmpty() || Date.isEmpty() || Manufacturer.isEmpty() ||
        Invoice_Num.isEmpty() || Comment.isEmpty() || Projects.isEmpty())
    {
        QMessageBox::critical(this, tr("Incomplete Data"), tr("Please fill in all the fields."));
        return;
    }




    qry.prepare("INSERT INTO Invoices (Invoice_Number,Part_Number,Manufacturer,Qty_Added,Date,Comment,Project) values (:invNum,:Partname,:Manufacturer,:Qty_Added,:Date,:Comment,:projj)");


    qry.bindValue(":invNum", Invoice_Num);
        qry.bindValue(":Partname", PartNum);
        qry.bindValue(":Manufacturer", Manufacturer);
        qry.bindValue(":Qty_Added", Qty_Add);
        qry.bindValue(":Date", Date);
        qry.bindValue(":Comment", Comment);
        qry.bindValue(":projj", Projects);

    if(qry.exec()){
        QMessageBox::information(this,tr("Save"),tr("Saved in INVOICES"));
    }
    else {
        QMessageBox::critical(this,tr("not saved"),tr("not saved in INVOICES"));
    }






   /*  QString projectName = ui->lineEdit_projj->text().trimmed();


        QSqlQuery qry2;
        qry2.prepare("INSERT INTO Project_Map (Project_Name, TableID) VALUES (:projectName, :tableId)");
        qry2.bindValue(":projectName", projectName);


        QDateTime currentTime = QDateTime::currentDateTime();
        QString tableId = "PRO_ID_" + currentTime.toString("dd_MM_yyyy_hh_mm_ss_zzz");


        qry2.bindValue(":tableId", tableId);

        if(qry2.exec()){

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
*/



    int input_val = ui->lineEdit_QTY_add->text().toInt();
    QString part_number_text = ui->lineEdit_partNo->text();


       QString selectQuery = QString("SELECT QTY FROM Parts_Details WHERE Part_Number = %1;").arg(part_number_text);

       if (!qry.exec(selectQuery)) {
           qDebug() << "Error executing select query:" << qry.lastError().text();

       }

       QString partNumber = ui->lineEdit_partNo->text();

          QSqlQuery query;
          query.prepare("SELECT QTY FROM Parts_Details WHERE Part_Number = :partNumber;");
          query.bindValue(":partNumber", partNumber);

          if (!query.exec()) {
              qDebug() << "Query execution error:" << query.lastError().text();

          }

          int readValue = 0;
          if (query.next()) {
              readValue = query.value(0).toInt();
          }





       int updated_value = input_val + readValue;


  QString updateQuery = QString("UPDATE Parts_Details SET QTY = %1 WHERE Part_Number = '%2';").arg(updated_value).arg(part_number_text);
       if (!qry.exec(updateQuery)) {
           qDebug() << "Error executing update query:" << qry.lastError().text();

       }

       if(qry.exec()){
           QMessageBox::information(this,tr("Info"),tr("Successfully Saved!"));
       }
       else {
           QMessageBox::critical(this,tr("not saved NAHI HUA"),tr("not saved NAHI HUA"));
       }





       qry.prepare("INSERT INTO Parts_Detai (Part_Number, Part_Name, Part_Description, Min_Qty, Value, Footprint, TempRange, Location, Grade, QTY, Project) "
                   "VALUES (:PartNum, :Partname, :Part_Description, :Min_qty, :Value, :Footprint, :TempRange, :Location, :Grade, :Add_Qty, :projj)");

       qry.bindValue(":PartNum", PartNum);
       //qry.bindValue(":Partname", PartNum);
//       qry.bindValue(":Part_Description", Part_Description);
//       qry.bindValue(":Min_qty", Min_qty);
//       qry.bindValue(":Value", Value);
//       qry.bindValue(":Footprint", Footprint);
//       qry.bindValue(":TempRange", TempRange);
//       qry.bindValue(":Location", Location);
//       qry.bindValue(":Grade", Grade);
//       qry.bindValue(":Add_Qty", Add_Qty);
//       qry.bindValue(":projj", Proj);

       /*if (qry.exec()) {
           QMessageBox::information(this, tr("Save"), tr("Saved"));
       } else {
           QMessageBox::critical(this, tr("Not Saved"), tr("Not Saved"));
       }
*/

       QString inv_num,PartNums,manufact,Add_Qty,date_rec,remark;
       QString Proj = ui->lineEdit_projj->text();
       QSqlQuery qry1;
       qry1.prepare("INSERT INTO Invoic (Invoice_Number, Part_Number, Manufacturer, Qty_Added, Date, Comment, Project) "
                    "VALUES (:iinvoice_Number, :ppart_Number, :mmanufacturer, :qqty_Added, :ddate, :ccomment, :projj)");

       qry1.bindValue(":iinvoice_Number", inv_num);
       qry1.bindValue(":ppart_Number", PartNums);
       qry1.bindValue(":mmanufacturer", manufact);
       qry1.bindValue(":qqty_Added", Add_Qty);
       qry1.bindValue(":ddate", date_rec);
       qry1.bindValue(":ccomment", remark);
       qry1.bindValue(":projj", Proj);

       /*if (qry1.exec()) {
           QMessageBox::information(this, tr("Save"), tr("Saved in INVOICES"));
       } else {
           QMessageBox::critical(this, tr("Not Saved"), tr("Not saved in INVOICES"));
       }*/


       q4.prepare("SELECT * FROM Project_Map WHERE Project_Name = :proj");
                  q4.bindValue(":proj", Proj);

                  if (q4.exec() && q4.next()) {
                      // Retrieve the row data
                      //QString tableID = q4.value(1).toString(); // Assuming TableID is stored in the second column

                      // Do something with the retrieved data


                      // You can store the data in a variable if needed
                      QString table_name = q4.value(1).toString();

                       qDebug() << "Table ID:------------" << table_name;

                      QString parto = ui->lineEdit_partNo->text();
                      QString manuff = ui->lineEdit_manufacturer->text();
                      QString allo = ui->lineEdit_QTY_add->text();
                      QString ref = ui->lineEdit_Comments->text();

                      q3.prepare("INSERT INTO " + table_name + " (Part_Number, Manufacturer , Allocated_Qty , Issued_Qty , References_Of_Issued) VALUES (:Part_Numbe,:Manufactur,:Allocated_Qt,:Issued_Qt,:References_Of_Issu)");
                      q3.bindValue(":Part_Numbe", parto);
                      q3.bindValue(":Manufactur", manuff);
                      q3.bindValue(":Allocated_Qt", allo);
                      q3.bindValue(":Issued_Qt", allo);
                      q3.bindValue(":References_Of_Issu", ref);




           if(q3.exec())
           {
               QMessageBox::information(this,"INFO","saved in projects");
           }
           else{
               QMessageBox::critical(this,"ERROR","not saved in projects");
               qDebug()<<"ERROR is"<<q3.lastError().text();
           }

       }








}

void add_qty_part::on_pushButton_6_clicked()
{
    QString partNumber = ui->lineEdit_partNo->text();

       QSqlQuery query;
       query.prepare("SELECT QTY FROM Parts_Details WHERE Part_Number = :partNumber;");
       query.bindValue(":partNumber", partNumber);

       if (!query.exec()) {
           qDebug() << "Query execution error:" << query.lastError().text();

       }

       int readValue = 0;
       if (query.next()) {
           readValue = query.value(0).toInt();
       }


}

void add_qty_part::on_pushButton_add_new_proj_clicked()
{




    QString projectName = ui->lineEdit_projj->text().trimmed();


        QSqlQuery checkQuery,q3,q4;
        checkQuery.prepare("SELECT COUNT(*) FROM Project_Map WHERE Project_Name = :projectName");
        checkQuery.bindValue(":projectName", projectName);
        if (checkQuery.exec() && checkQuery.next()) {
            int rowCount = checkQuery.value(0).toInt();
            if (rowCount == 0) {

                QSqlQuery insertQuery;
                insertQuery.prepare("INSERT INTO Project_Map (Project_Name, TableID) VALUES (:projectName, :tableId)");
                insertQuery.bindValue(":projectName", projectName);

                QDateTime currentTime = QDateTime::currentDateTime();
                QString tableId = "PRO_ID_" + currentTime.toString("dd_MM_yyyy_hh_mm_ss_zzz");
                insertQuery.bindValue(":tableId", tableId);

                if (insertQuery.exec()) {

                    QSqlQuery createTableQuery;
                    createTableQuery.prepare("CREATE TABLE " + tableId + " (Part_Number TEXT, Manufacturer TEXT, Allocated_Qty TEXT, Issued_Qty TEXT, References_Of_Issued TEXT)");
                    if (createTableQuery.exec()) {
                        QMessageBox::information(this, "Success", "New project added successfully.");
                    } else {
                        QMessageBox::critical(this, "Error", "Failed to create table for the new project.");
                    }
                } else {
                    QMessageBox::critical(this, "Error", "Failed to insert new project into project_map table.");
                }
            } else {

                QMessageBox::information(this, "Information", "Project name already exists.");
            }
        } else {
            QMessageBox::critical(this, "Error", "Failed to check existing project in project_map table.");
        }


}

void add_qty_part::on_pushButton_ref_clicked()
{
    ui->lineEdit_Comments->clear();
    ui->lineEdit_date->clear();
    ui->lineEdit_invoiceNum->clear();
    ui->lineEdit_manufacturer->clear();
    ui->lineEdit_partNo->clear();
    ui->lineEdit_projj->clear();
    ui->lineEdit_QTY_add->clear();
}

void add_qty_part::on_pushButton_calender_clicked()
{
    QDialog* dialogs = new QDialog(this);

    dialogs->setWindowTitle("Calender");

    dialogs->resize(200,200);

    QCalendarWidget* cale = new QCalendarWidget(dialogs);

    QVBoxLayout* lays = new QVBoxLayout(dialogs);

    lays->addWidget(cale);


    connect(cale,&QCalendarWidget::selectionChanged,this,&add_qty_part::handlechange);

    dialogs->show();
}

void add_qty_part::handlechange(){



     QCalendarWidget* kal = qobject_cast<QCalendarWidget*>(sender());

     if(kal){

         QDate selectedDates = kal->selectedDate();

         ui->lineEdit_date->setText(selectedDates.toString("yyyy-MM-dd"));


     }




}
