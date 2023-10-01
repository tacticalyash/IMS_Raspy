#include "genisn.h"
#include "ui_genisn.h"
#include <QSql>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QSqlError>
#include <QStandardItemModel>
#include <QDebug>
#include <QTableView>
#include <QSqlQuery>
#include <QMessageBox>
#include <QModelIndex>
#include <QDate>
#include <limits>
#include <QTextTable>
#include <QCompleter>
#include <QCalendarWidget>

GenISN::GenISN(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GenISN)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint | Qt::WindowCloseButtonHint);
    ui->lineEdit_Gen_ISN->setReadOnly(true);


     QSqlQuery qs;

     if (qs.exec("SELECT Invoice_Number FROM Invoices")) {
         QStringList rowData;
         while (qs.next()) {
             QString partNumber = qs.value(0).toString();
             rowData.append(partNumber);
         }


         QCompleter *completer = new QCompleter(rowData, this);
         completer->setCaseSensitivity(Qt::CaseInsensitive);
         ui->lineEdit_INV_NO->setCompleter(completer);
     } else {
         qDebug() << "Error executing the query:" << qs.lastError().text();
     }


     QSqlQuery query;
     query.exec("SELECT ISN_Number FROM ISN_Manager ORDER BY ROWID DESC LIMIT 1");

     if (query.next()) {
         QString lastIsn = query.value(0).toString();
         int currentYear = QDate::currentDate().year();


         QRegularExpression regex("\\d+");
         QRegularExpressionMatch match = regex.match(lastIsn);
         QString serialNumber = match.captured();
         unsigned long long int lastSerialNumber = serialNumber.toInt();

         if (currentYear != QDate::currentDate().year()) {
             lastSerialNumber = 0;
         }

         QString text = QString::number(lastSerialNumber + 1) + "/" + QString::number(currentYear);
         ui->lineEdit_Gen_ISN->setText(text);
     }

     }



GenISN::~GenISN()
{
    delete ui;
}

void GenISN::on_pushButton_gen_slip_clicked()
{



    QAbstractItemModel* model = ui->tableView->model();
        if (model)
            model->removeRows(0, model->rowCount());
        ui->lineEdit_INV_Date->clear();
        ui->lineEdit_date->clear();
        ui->lineEdit_INV_NO->clear();
        ui->lineEdit_IR->clear();
        ui->lineEdit_Order_ref->clear();
        ui->lineEdit_SUP->clear();


}

void GenISN::on_pushButton_2_clicked()
{

    QString searchText = ui->lineEdit_Gen_ISN->text();


       QSqlQueryModel *model = new QSqlQueryModel();

       QSqlQuery query;
       query.prepare("SELECT * FROM ISN_Manager WHERE ISN_Number LIKE :searchText OR Supplier LIKE :searchText OR Date LIKE :searchText OR Invoice_Number LIKE :searchText OR Our_Order_Reference LIKE :searchText OR Inspection LIKE :searchText OR IR_Number LIKE :searchText");
       query.bindValue(":searchText", "%" + searchText + "%");
       query.exec();
       model->setQuery(query);
       ui->tableView->setModel(model);
}



void GenISN::on_pushButton_add_lineditData_clicked()
{




    QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Confirmation", "Are you sure you want to update the quantity?",
                                      QMessageBox::Yes | QMessageBox::No);

        if(reply == QMessageBox::Yes)



        {



    QSqlQuery qry;
    QString ISNno  ,SUP  ,Date  ,INV , OR  ,insp ,IRno,Inv_date;

    ISNno=ui->lineEdit_Gen_ISN->text();

    SUP=ui->lineEdit_SUP->text();
    Date=ui->lineEdit_date->text();
    INV=ui->lineEdit_INV_NO->text();
    OR=ui->lineEdit_Order_ref->text();
    insp=ui->lineEdit_Insp->text();
    IRno=ui->lineEdit_IR->text();
    Inv_date= ui->lineEdit_INV_Date->text();


    if((SUP.isEmpty()) && (Date.isEmpty()) && (INV.isEmpty()) && (OR.isEmpty()) && (insp.isEmpty()) && (IRno.isEmpty()) && (Inv_date.isEmpty())){


        QMessageBox::critical(this,"ERROR","PLEASE FILL ALL THE BOXES");
    }

    else {



    qry.prepare("INSERT INTO ISN_Manager (ISN_Number,Supplier,Date,Invoice_Number,Our_Order_Reference,Inspection,IR_Number) values ('"+ ISNno +"','"+ SUP +"','"+ Date +"','"+ INV +"','"+ OR +"','"+ insp +"','"+ IRno +"')");

        if(qry.exec()){
            QMessageBox::information(this,tr("Save"),tr("saved"));
        }
        else {

        }

    }

        }

}

void GenISN::on_pushButton_fetch_table_clicked()
{

    QString invoiceNum = ui->lineEdit_INV_NO->text();

    QSqlQuery qd;
    qd.prepare("SELECT Date FROM Invoices WHERE Invoice_Number = :invoiceNum");
    qd.bindValue(":invoiceNum", invoiceNum);
    qd.exec();

    QString invoiceDate;
    if (qd.next()) {
        invoiceDate = qd.value(0).toString();
     ui->lineEdit_INV_Date->setText(invoiceDate);
    }
    else{
        QMessageBox::critical(this,"ERROR","Date is not there");
    }





   invoiceDate = qd.value(0).toString();


    QSqlQuery query;
    query.prepare("SELECT * FROM Invoices WHERE Invoice_Number = :invoiceNum");
    query.bindValue(":invoiceNum", invoiceNum);
    //query.bindValue(":invoiceDate", invoiceDate);
    query.exec();


    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery(query);


    ui->tableView->setModel(model);
    ui->tableView->setHidden(false);
    ui->tableView->resizeColumnsToContents();

         ui->tableView->setColumnWidth(0, 0);
        ui->tableView->setColumnWidth(1, 607);
        ui->tableView->setColumnWidth(2, 607);
        ui->tableView->setColumnWidth(3, 607);
         ui->tableView->setColumnWidth(4, 0);
          ui->tableView->setColumnWidth(5, 0);
           ui->tableView->setColumnWidth(6, 0);


}
void GenISN::handlechange()
{
    QCalendarWidget* kal = qobject_cast<QCalendarWidget*>(sender());

    if(kal){

        QDate selectedDates = kal->selectedDate();

        ui->lineEdit_date->setText(selectedDates.toString("yyyy-MM-dd"));


    }

}

void GenISN::on_pushButton_clicked()
{

    QDialog* dialogs = new QDialog(this);

    dialogs->setWindowTitle("Calender");

    dialogs->resize(200,200);

    QCalendarWidget* cale = new QCalendarWidget(dialogs);

    QVBoxLayout* lays = new QVBoxLayout(dialogs);

    lays->addWidget(cale);


    connect(cale,&QCalendarWidget::selectionChanged,this,&GenISN::handlechange);

    dialogs->show();

}
