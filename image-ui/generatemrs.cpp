#include "generatemrs.h"
#include "mrsmodel.h"
#include "ui_generatemrs.h"
#include <QSql>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QDebug>
#include <QTableView>
#include <QSqlQuery>
#include <QMessageBox>
#include <QModelIndex>
#include <QDate>
#include <QSqlError>
#include <QCompleter>
#include <QStringListModel>
#include <QApplication>
#include <QClipboard>
generateMRS::generateMRS(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::generateMRS)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint | Qt::WindowCloseButtonHint);

    ui->lineEdit_MRS->setReadOnly(true);
    ui->comboBox->addItem("            NONE");
    ui->comboBox->addItem("       TESTING");
    ui->comboBox->addItem("PRODUCTION");

    QString selectedText = ui->combo_manf->currentText();

        // Copy the selected text to the clipboard
        QApplication::clipboard()->setText(selectedText);




QSqlQuery q1;
     if (q1.exec("SELECT Recipients_Name FROM Recipient_Map")) {
         ui->comboBox_recepient_names->clear();
         while (q1.next()) {
             QString recipientName = q1.value(0).toString();
                 ui->comboBox_recepient_names->addItem(recipientName);
         }
     } else {
         qDebug() << "Error executing SQL query:" << q1.lastError().text();
     }





     QSqlQuery query;

     if (query.exec("SELECT Project_Name FROM Project_Map")) {
         QStringList rowData;
         while (query.next()) {
             QString partNumber = query.value(0).toString();
             rowData.append(partNumber);
         }


         QCompleter *completer = new QCompleter(rowData, this);
         completer->setCaseSensitivity(Qt::CaseInsensitive);
         ui->lineEdit_Project->setCompleter(completer);
     } else {
         qDebug() << "Error executing the query:" << query.lastError().text();
     }




     query.exec("SELECT MRS_Number FROM MRS_Manager ORDER BY ROWID DESC LIMIT 1");

     if (query.next()) {
         QString lastMrs = query.value(0).toString();
         int currentYear = QDate::currentDate().year();

         QRegularExpression regex("\\d+");
         QRegularExpressionMatch match = regex.match(lastMrs);
         QString serialNumber = match.captured();
         unsigned long long int lastSerialNumber = serialNumber.toInt();

         if (currentYear != QDate::currentDate().year()) {
             lastSerialNumber = 0;
         }

         QString text = QString::number(lastSerialNumber + 1) + "/" + QString::number(currentYear);
         ui->lineEdit_MRS->setText(text);
     }


     QTableView* myTableView = ui->tableView;

     mModel = new MrsModel(myTableView);
     myTableView->setModel(mModel);

         ui->tableView->setColumnWidth(0, 450);
         ui->tableView->setColumnWidth(1, 450);
         ui->tableView->setColumnWidth(2, 450);



         if (query.exec("SELECT Part_Number FROM Invoices")) {
             QStringList rowData;
             while (query.next()) {
                 QString partNumber = query.value(0).toString();
                 rowData.append(partNumber);
             }


             QCompleter *completer = new QCompleter(rowData, this);
             completer->setCaseSensitivity(Qt::CaseInsensitive);
             ui->lineEdit_Part_num->setCompleter(completer);
         } else {
             qDebug() << "Error executing the query:" << query.lastError().text();
         }



}

generateMRS::~generateMRS()
{
    delete ui;
}

void generateMRS::on_pushButton_3_clicked(){




    QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Confirmation", "Are you sure you want to Generate MRS Slip?",
                                      QMessageBox::Yes | QMessageBox::No);

        if(reply == QMessageBox::Yes)



        {




    auto mrs_number = ui->lineEdit_MRS->text();
    auto project = ui->lineEdit_Project->text();
    auto date = ui->lineEdit_Date->text();
    auto area_stage =ui->comboBox->currentText();



    for(int i = 0;i<mModel->rowCount();++i)
    {
        auto part_number = mModel->data(mModel->index(i,0)).toString();
        auto manuFacturer = mModel->data(mModel->index(i,1)).toString();
        auto qty = mModel->data(mModel->index(i,2)).toInt();

        QSqlQuery qry;
         qry.prepare("insert into MRS_Manager (MRS_Number,Project,Date,Area_Stage,Part_Number,Manufacturer,Qty,Authorised_By) values (:mrs_number , :project , :date , :area_stage , :part_number , :manufacturer , :qty , :authorised_by );");
         qry.bindValue(":mrs_number",mrs_number);
         qry.bindValue(":project",project);
         qry.bindValue(":date",date);
         qry.bindValue(":area_stage",area_stage);
         qry.bindValue(":part_number",part_number);
         qry.bindValue(":manufacturer",manuFacturer);
         qry.bindValue(":qty",qty);
         qry.bindValue(":authorised_by","2");






         QString selected_recipient = ui->comboBox_recepient_names->currentText();

         QString tableIdQuery = "SELECT TableID FROM Recipient_Map WHERE Recipients_Name = '" + selected_recipient + "'";
         QSqlQuery tableIdQueryResult(tableIdQuery);

         if (tableIdQueryResult.next()) {
             QString tableId = tableIdQueryResult.value(0).toString();
             qDebug() << "Here is your tableid: " << tableId << endl;

             QSqlQuery qrd;
             qrd.prepare("INSERT INTO " + tableId + " (Project, Part_Number, Manufacturer, Date_Issued, Qty_Issued) VALUES (:Project, :Part_Number, :Manufacturer, :Date_issued  , :Qty_Issued )");
             qrd.bindValue(":Project", ui->lineEdit_Project->text());
             qrd.bindValue(":Part_Number", ui->lineEdit_Part_num->text());
             qrd.bindValue(":Manufacturer", selected_recipient);
             qrd.bindValue(":Qty_Issued", ui->lineEdit_enter_qty->text());
             qrd.bindValue(":Date_issued", ui->lineEdit_Date->text());

             if (!qrd.exec()) {

                 QMessageBox::critical(this, "Error", "Data not saved. Error: " + qrd.lastError().text());
             } else {

                 QMessageBox::information(this, "Success", "Data has been saved successfully.");
             }


         if(qry.exec()){
             QMessageBox::information(this,"INFO","New MRS has been Generated!");

         }
         else{
             QMessageBox::critical(this,"ERROR"," Failed to Generate New MRS!");
         }
    }


}
        }
}

void generateMRS::on_pushButton_clicked()
{


    QString partName = ui->lineEdit_Part_num->text();

    QSqlQuery query;
    query.prepare("SELECT Manufacturer FROM Invoices WHERE Part_Number = :partNumber");
    query.bindValue(":partNumber", partName);

    if (query.exec() && query.next()) {
        QString manufacturer = query.value(0).toString();

    } else {

        qDebug() << "Error executing the query for Manufacturer:" << query.lastError().text();
    }


    QSqlQuery query1;
    query1.prepare("SELECT QTY FROM Parts_Details WHERE Part_Number = :partNumber");
    query1.bindValue(":partNumber", partName);


   if (query1.exec() && query1.next()) {
       QString qty = query1.value(0).toString();
       ui->lineEdit_qty_avail->setText(qty);
   } else {
      ui->lineEdit_qty_avail->clear();

        QMessageBox::critical(this, "ERROR", "Qty not found!");
    }






    QString partNum = ui->lineEdit_Part_num->text();
    QString proj_name = ui->lineEdit_Project->text();

    QSqlQuery qrry,q1;

    qrry.prepare("SELECT TableID FROM Project_Map WHERE Project_Name = ?");
       qrry.addBindValue(proj_name);
       qrry.exec();
       qrry.next();

QString tableId = qrry.value(0).toString();

       if (qrry.exec() && qrry.next()) {


           q1.prepare("SELECT * FROM "+ tableId +" WHERE  Part_Number = :part_number");
           q1.bindValue(":tableId", tableId);
           q1.bindValue(":part_number", partNum);

               if (q1.exec() && q1.next()) {

                   QMessageBox::information(this, "Result", "Part number present");
                   /*int rowIndex = mModel->rowCount();
                   auto partNumber = ui->lineEdit_Part_num->text();
                   mModel->insertRow(rowIndex);
                   mModel->setData(mModel->index(rowIndex,0),partNumber);*/
               } else {

                   QMessageBox::critical(this, "ERROR", "Not found");

               }
           } else {

               QMessageBox::critical(this, "Error", "Project not found");
           }

       QString partNumb = ui->lineEdit_Part_num->text();

       ui->combo_manf->clear();

       QSqlQuery qery;
       qery.prepare("SELECT  Manufacturer,Allocated_qty FROM "+ tableId +" WHERE Part_Number = ?");
       qery.addBindValue(partNumb);
       if (qery.exec()) {

           while (qery.next()) {
               QString manufacturer = qery.value(0).toString();
               QString allocatedQty = qery.value(1).toString();

               ui->combo_manf->addItem(manufacturer);

           }
       } else {

           QMessageBox::critical(this, "Error", "Failed to fetch manufacturers from the database");
       }

       }






void generateMRS::on_pushButton_insert_in_inventory_clicked()
{





}

void generateMRS::on_pushButton_ref_clicked()
{

    ui->lineEdit_Authorised->clear();
    ui->lineEdit_Project->clear();
    ui->lineEdit_qty_avail->clear();
    ui->lineEdit_Part_num->clear();
    ui->lineEdit_enter_qty->clear();
    ui->combo_manf->clear();
}

void generateMRS::on_pushButton_rem_clicked()
{

}

void generateMRS::on_pushButton_add_qt_inventory_clicked()
{



    QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Confirmation", "Are you sure you want to update the quantity?",
                                      QMessageBox::Yes | QMessageBox::No);

        if(reply == QMessageBox::Yes)



        {

    //QString partNumx = ui->lineEdit_Part_num->text();
    QString proj_name = ui->lineEdit_Project->text();

    QSqlQuery qrry,q1;

    qrry.prepare("SELECT TableID FROM Project_Map WHERE Project_Name = ?");
       qrry.addBindValue(proj_name);
       qrry.exec();
       qrry.next();

QString tableId = qrry.value(0).toString();

       if (qrry.exec() && qrry.next()) {

  QString partNum = ui->lineEdit_Part_num->text();
           q1.prepare("SELECT * FROM "+ tableId +" WHERE  Part_Number = :part_number");
           q1.bindValue(":tableId", tableId);
           q1.bindValue(":part_number", partNum);

               if (q1.exec() && q1.next()) {

                   //QMessageBox::information(this, "Result", "Part number present");
                   int rowIndex = mModel->rowCount();
                   auto partNumber = ui->lineEdit_Part_num->text();
                   auto manufg = ui->combo_manf->currentText();
                   auto use_qty = ui->lineEdit_enter_qty->text();
                   mModel->insertRow(rowIndex);
                   mModel->setData(mModel->index(rowIndex,0),partNumber);
                   mModel->setData(mModel->index(rowIndex,1),manufg);
                   mModel->setData(mModel->index(rowIndex,2),use_qty);

               } else {

                   QMessageBox::critical(this, "Cant add", "Not found");

               }
           } else {

               QMessageBox::critical(this, "Error", "Project not found");
           }





  QSqlQuery query;
    QString partName = ui->lineEdit_Part_num->text();
        QString enterQty = ui->lineEdit_enter_qty->text();


        QString availQty = ui->lineEdit_qty_avail->text();


        int updatedQty = availQty.toInt() - enterQty.toInt();
        query.prepare("UPDATE Parts_Details SET QTY = ? WHERE Part_Number = ?");
        query.bindValue(0, updatedQty);
        query.bindValue(1, partName);
        if (query.exec()) {

          QMessageBox::information(this,"INFO","Quantity updated successfully into Inventory!");
        }
        else{
            QMessageBox::critical(this,"ERROR","failed to update");

}


        }




}
