#include "addnewpart.h"
#include "ui_addnewpart.h"
#include <QTimer>
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
#include <QApplication>
#include <QClipboard>
#include <QCalendarWidget>
#include <QDialog>
#include <QScreen>
#include <QVBoxLayout>
#include <QPainter>

addNewPart::addNewPart(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addNewPart)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::WindowMinimizeButtonHint  | Qt::WindowCloseButtonHint);


    ui->lineEdit_Proj->clear();




    QString fixedText = QString::fromUtf8("   °C to   °C");
    ui->lineEdit_Temp->setText(fixedText);

    ui->comboBox_grade->addItem("NONE");
    ui->comboBox_grade->addItem("MILITARY");
    ui->comboBox_grade->addItem("INDUSTRIAL");
    ui->comboBox_grade->addItem("COMMERCIAL");

    ui->lineEdit_min_qty->setText("1");



    QSqlQuery query,q1;

    if (query.exec("SELECT Project_Name FROM Project_Map")) {
        QStringList rowData;
        while (query.next()) {
            QString partNumber = query.value(0).toString();
            rowData.append(partNumber);
        }
        ui->lineEdit_Proj->setText(rowData.join(' '));
        ui->lineEdit_Proj->clear();

        QCompleter *completer = new QCompleter(rowData, this);
        completer->setCaseSensitivity(Qt::CaseInsensitive);
        ui->lineEdit_Proj->setCompleter(completer);
    } else {
        qDebug() << "Error executing the query:" << query.lastError().text();
    }


    if (q1.exec("SELECT Manufacturer FROM Invoices")) {
        QStringList rowData;
        while (q1.next()) {
            QString partNumber = q1.value(0).toString();
            rowData.append(partNumber);
        }
        ui->lineEdit_Manf->setText(rowData.join(' '));
        ui->lineEdit_Manf->clear();

        QCompleter *completer = new QCompleter(rowData, this);
        completer->setCaseSensitivity(Qt::CaseInsensitive);
        ui->lineEdit_Manf->setCompleter(completer);
    } else {
        qDebug() << "Error executing the query:" << query.lastError().text();
    }



}

addNewPart::~addNewPart()
{
    delete ui;
}

void addNewPart::on_pushButton_add_clicked()
{
    QSqlQuery qry, qry1,q3,q4;
       QString PartNum, Partname, Part_Description, Min_qty, Value, Footprint, TempRange, Location, Grade, Add_Qty, Proj;
       QString inv_num, manufact, remark, date_rec;

       PartNum = ui->lineEdit_Part_No->text();
       Proj = ui->lineEdit_Proj->text();
       Partname = ui->lineEdit_Part_Name->text();
       Part_Description = ui->lineEdit_Descrp->text();
       Min_qty = ui->lineEdit_min_qty->text();
       Value = ui->lineEdit_val->text();
       Footprint = ui->lineEdit_footp->text();
       TempRange = ui->lineEdit_Temp->text();
       Location = ui->lineEdit_Location->text();
       Grade = ui->comboBox_grade->currentText();
       Add_Qty = ui->lineEdit_avl_qty->text();

       inv_num = ui->lineEdit_invo_num->text();
       manufact = ui->lineEdit_Manf->text();
       remark = ui->lineEdit_Remark->text();
       date_rec = ui->lineEdit_Date->text();


       if (PartNum.isEmpty() || Proj.isEmpty() || Partname.isEmpty() || Part_Description.isEmpty() ||
           Min_qty.isEmpty() || Value.isEmpty() || Footprint.isEmpty() || TempRange.isEmpty() ||
           Location.isEmpty() || Add_Qty.isEmpty() || inv_num.isEmpty() ||
           manufact.isEmpty() || remark.isEmpty() || date_rec.isEmpty())
       {
           QMessageBox::critical(this, tr("Incomplete Data"), tr("Please fill in all the fields."));
           return;
       }

       qry.prepare("INSERT INTO Parts_Details (Part_Number, Part_Name, Part_Description, Min_Qty, Value, Footprint, TempRange, Location, Grade, QTY, Project) "
                   "VALUES (:PartNum, :Partname, :Part_Description, :Min_qty, :Value, :Footprint, :TempRange, :Location, :Grade, :Add_Qty, :projj)");

       qry.bindValue(":PartNum", PartNum);
       qry.bindValue(":Partname", Partname);
       qry.bindValue(":Part_Description", Part_Description);
       qry.bindValue(":Min_qty", Min_qty);
       qry.bindValue(":Value", Value);
       qry.bindValue(":Footprint", Footprint);
       qry.bindValue(":TempRange", TempRange);
       qry.bindValue(":Location", Location);
       qry.bindValue(":Grade", Grade);
       qry.bindValue(":Add_Qty", Add_Qty);
       qry.bindValue(":projj", Proj);

       if (qry.exec()) {
           QMessageBox::information(this, tr("Save"), tr("Saved"));
       } else {
           QMessageBox::critical(this, tr("Not Saved"), tr("Not Saved"));
       }

       qry1.prepare("INSERT INTO Invoices (Invoice_Number, Part_Number, Manufacturer, Qty_Added, Date, Comment, Project) "
                    "VALUES (:iinvoice_Number, :ppart_Number, :mmanufacturer, :qqty_Added, :ddate, :ccomment, :projj)");

       qry1.bindValue(":iinvoice_Number", inv_num);
       qry1.bindValue(":ppart_Number", PartNum);
       qry1.bindValue(":mmanufacturer", manufact);
       qry1.bindValue(":qqty_Added", Add_Qty);
       qry1.bindValue(":ddate", date_rec);
       qry1.bindValue(":ccomment", remark);
       qry1.bindValue(":projj", Proj);

       if (qry1.exec()) {
           QMessageBox::information(this, tr("Save"), tr("Saved in INVOICES"));
       } else {
           QMessageBox::critical(this, tr("Not Saved"), tr("Not saved in INVOICES"));
       }


       q4.prepare("SELECT * FROM Project_Map WHERE Project_Name = :proj");
                  q4.bindValue(":proj", Proj);

                  if (q4.exec() && q4.next()) {
                      // Retrieve the row data
                      //QString tableID = q4.value(1).toString(); // Assuming TableID is stored in the second column

                      // Do something with the retrieved data


                      // You can store the data in a variable if needed
                      QString table_name = q4.value(1).toString();

                       qDebug() << "Table ID:------------" << table_name;

                      QString parto = ui->lineEdit_Part_No->text();
                      QString manuff = ui->lineEdit_Manf->text();
                      QString allo = ui->lineEdit_avl_qty->text();
                      QString ref = ui->lineEdit_Location->text();

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

void addNewPart::on_pushButton_clear_clicked()
{


    ui->lineEdit_Proj->clear();
    ui->lineEdit_avl_qty->clear();
    ui->lineEdit_Date->clear();
    ui->lineEdit_Descrp->clear();
    ui->lineEdit_footp->clear();
    ui->lineEdit_invo_num->clear();
    ui->lineEdit_Location->clear();
    ui->lineEdit_Manf->clear();
    ui->lineEdit_Part_Name->clear();
    ui->lineEdit_Part_No->clear();
    ui->lineEdit_Remark->clear();
    ui->lineEdit_val->clear();

}

void addNewPart::on_pushButton_addnew_proj_clicked()
{

    QString projectName = ui->lineEdit_Proj->text().trimmed();

        QSqlQuery checkQuery,q11;
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
                qDebug()<<"tableId is:-"<<tableId;
                QString newid = tableId;

                QString parto = ui->lineEdit_Part_No->text();
                QString Manuf = ui->lineEdit_Manf->text();
                QString allo = ui->lineEdit_avl_qty->text();
                QString ref= ui->lineEdit_val->text();



               q11.prepare("INSERT INTO " + tableId + " (Part_Number, Manufacturer, Allocated_Qty, Issued_Qty, References_Of_Issued) VALUES (:Part_Numbe,:Manufacture,:Allocated_Qt,:Issued_Qt,:References_Of_Iss)");
               q11.bindValue(":Part_Numbe",parto);
               q11.bindValue(":Manufacture",Manuf);
               q11.bindValue(":Allocated_Qt",allo);
               q11.bindValue(":Issued_Qt",allo);
               q11.bindValue(":References_Of_Iss",ref);
               q11.exec();
                if (insertQuery.exec()) {

                    QSqlQuery createTableQuery;
                    createTableQuery.prepare("CREATE TABLE " + newid + " (Part_Number TEXT, Manufacturer TEXT, Allocated_Qty TEXT, Issued_Qty TEXT, References_Of_Issued TEXT)");
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

void addNewPart::on_pushButton_calender_clicked()
{



    QDialog* dialogs = new QDialog(this);

    dialogs->setWindowTitle("Calender");

    dialogs->resize(200,200);

    QCalendarWidget* cale = new QCalendarWidget(dialogs);

    QVBoxLayout* lays = new QVBoxLayout(dialogs);

    lays->addWidget(cale);


    connect(cale,&QCalendarWidget::selectionChanged,this,&addNewPart::handlechange);

    dialogs->show();


}


void addNewPart::handlechange(){



     QCalendarWidget* kal = qobject_cast<QCalendarWidget*>(sender());

     if(kal){

         QDate selectedDates = kal->selectedDate();

         ui->lineEdit_Date->setText(selectedDates.toString("yyyy-MM-dd"));


     }




}
