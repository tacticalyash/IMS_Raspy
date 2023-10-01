#include "mrsslipviewer.h"
#include "ui_mrsslipviewer.h"
#include <QPdfWriter>
#include <QMessageBox>
#include <QPainter>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>
#include <QFileDialog>
#include <QPdfWriter>
#include <QPainter>
#include <QVBoxLayout>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlQueryModel>
#include <QDebug>
#include <QCompleter>
#include <QGroupBox>
#include <QScrollArea>
#include <QScrollBar>
#include <QPdfWriter>
#include <QPainter>
#include <QRectF>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QFileDialog>
#include <QtPrintSupport/QPrinter>
#include <QMessageBox>
MRSslipViewer::MRSslipViewer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MRSslipViewer)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint | Qt::WindowCloseButtonHint);



    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery();



    qry->prepare("select * from MRS_Manager");

    if (!qry->exec()) {

        return;
    }

    completer = new QCompleter(this);
    completer->setCaseSensitivity(Qt::CaseInsensitive); // Set case sensitivity
    ui->lineEdit->setCompleter(completer);


     completerModel = new QSqlQueryModel(this);
    completer->setModel(completerModel);


    connect(ui->lineEdit, &QLineEdit::textChanged, this, &MRSslipViewer::onLineEditTextChanged);

}

MRSslipViewer::~MRSslipViewer()
{
    delete ui;
}




QString MRSslipViewer::getISN_detail(QString str,QString searchText){
    QSqlQuery query;
   



     searchText = ui->lineEdit->text();

    query.prepare("SELECT Area_Stage, MRS_Number , Project , Date FROM MRS_Manager WHERE MRS_Number =:searchText");

    query.bindValue(":searchText", searchText);
    query.exec();

    if(query.next()){

        str= str.replace("{{mrs}}",query.value("MRS_Number").toString());
        str= str.replace("{{proj}}",query.value("Project").toString());
        str= str.replace("{{date}}",query.value("Date").toString());
        str= str.replace("{{area}}",query.value("Area_Stage").toString());


    }


    return str;





}

void MRSslipViewer::on_pushButton_refresh_clicked()
{







      QString searchText = ui->lineEdit->text();


         QSqlQueryModel *model = new QSqlQueryModel();


         QSqlQuery query;

         query.prepare("SELECT * FROM MRS_Manager WHERE MRS_Number LIKE:searchText");

         query.bindValue(":searchText", searchText);
         query.exec();


         model->setQuery(query);






  auto str = QString("<html><head></head><body><p style=\"text-align: center;font-size: 27px;\">MATERIAL REQUISITION SLIP</p> "
                     "<hr style=\"width=\\\"50%\\\" >\""
                     "<pre style='font-size: 25px; font-family: Times New Roman;'>MRS No :{{mrs}}                                                                                                                                                        Area/Stage : {{area}}</pre>"
                     "<pre style='font-size: 25px; font-family: Times New Roman;'>Project : {{proj}}                                                                                                                                             Date :{{date}}</pre>"

                     "<hr style=\"width=\\\"50%\\\" >\""
                     "%1"
                     "<hr style=\"width=\\\"50%\\\" >\""
                     "<pre style='font-size: 25px; font-family: Times New Roman;'>Authorised By : 2 </pre>"

                     "<pre style='font-size: 25px; font-family: Times New Roman;'>Stores                                                                                                                                                                                  User Dept</pre>"
                     "</body></html>");
         str = getISN_detail(str,searchText);
         ui->textBrowser->setHtml(str.arg(generateTextTable(model)));

}

void MRSslipViewer::on_pushButton_clicked()
{


    QTextDocument* doc = ui->textBrowser->document();


       QPrinter printer(QPrinter::HighResolution);


       printer.setOutputFormat(QPrinter::PdfFormat);
       QString filePath = QFileDialog::getSaveFileName(this, "Save PDF", QString(), "*.pdf");
       if (filePath.isEmpty()) {
           return;
       }
       printer.setOutputFileName(filePath);
       printer.setResolution(300);


       QPainter painter;
       painter.begin(&printer);
       doc->drawContents(&painter);
       painter.end();

       QMessageBox::information(this, "PDF Saved", "The PDF has been saved.");
}

QString MRSslipViewer::generateTextTable(QSqlQueryModel *model)
{
    QString tableStr = "<table align=\"center\" border=\"1\" cellpadding=\"1\" cellspacing=\"1\" dir=\"ltr\" id=\"ysTable\" style=\"width:0%\">";

    const int rowCount = model->rowCount();
    QStringList headers;
    for(int c = 0; c < model->columnCount(); ++c)
        headers.append(model->headerData(c, Qt::Horizontal).toString());
    const int columnPartNumberIndex = headers.indexOf("Part_Number");
    const int columnManufIndex = headers.indexOf("Manufacturer");
    const int columnQtyIndex = headers.indexOf("Qty");

    tableStr += "<tr>";
    tableStr += "<th width='7%' style='font-family: Times New Roman; font-size: 20px;'>SL No</th> ";
    tableStr += "<th width='40%' style='font-family: Times New Roman; font-size: 20px;'>Part Number</th>";
    tableStr += "<th width='40%' style='font-family: Times New Roman;font-size: 20px;'>Manufacturer</th>";
    tableStr += "<th width='40%' style='font-family: Times New Roman;font-size: 20px;'>Qty</th>";

    tableStr += "</tr>";
    for(int r = 0; r < rowCount; ++r)
    {
        QString rowStr = "<tr> <td style='font-size: 20px; font-family: Times New Roman;'> " + QString::number(r+1) + "</td>";
        rowStr += "<td style='font-size: 20px; font-family: Times New Roman;'>"  + model->data(model->index(r, columnPartNumberIndex)).toString()+ "</td>";
        rowStr += "<td style='font-size: 20px;font-family: Times New Roman;'>"  + model->data(model->index(r, columnManufIndex)).toString()+ "</td>";
        rowStr += "<td style='font-size: 20px; font-family: Times New Roman;'>"  + model->data(model->index(r, columnQtyIndex)).toString()+ "</td>";
        rowStr += "</tr>";
        tableStr += rowStr;
    }
    tableStr += "</table>";
    return tableStr;





}
void MRSslipViewer::onLineEditTextChanged(const QString &text) {
    QSqlQuery query;
    query.prepare("SELECT MRS_Number FROM MRS_Manager WHERE MRS_Number LIKE :text");
    query.bindValue(":text", "%" + text + "%");
    query.exec();
    completerModel = new QSqlQueryModel(this);
    completerModel->setQuery(query);
    completer->setModel(completerModel);
    completer->setCompletionMode(QCompleter::PopupCompletion);
}


void MRSslipViewer::on_pushButton_del_MRS_clicked()
{









    QString mrsNumberToDelete = ui->lineEdit->text();


       QMessageBox::StandardButton confirmDelete;
       confirmDelete = QMessageBox::question(this, "Confirm Deletion", "Are you sure you want to delete the Mrs_Number?", QMessageBox::Yes | QMessageBox::No);

       if (confirmDelete == QMessageBox::Yes) {


           QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
            db.setDatabaseName("/home/pi/Desktop/database.sqlite");
           if (!db.open()) {
               qDebug() << "not opened";

           }


           db.transaction();


           QString deleteQuery = "DELETE FROM MRS_Manager WHERE MRS_Number = :mrsNumber";
           QSqlQuery query(db);
           query.prepare(deleteQuery);
           query.bindValue(":isnNumber", mrsNumberToDelete);
           query.exec();


           deleteQuery = "DELETE FROM MRS_Manager WHERE Project = :project AND Date = :date AND Area_Stage = :area AND Part_Number = :partNum AND Manufacturer = :manf AND Qty = :qty AND Authorised_By = :authB";
           query.prepare(deleteQuery);
           query.bindValue(":project", mrsNumberToDelete);
           query.bindValue(":date", mrsNumberToDelete);
           query.bindValue(":area", mrsNumberToDelete);
           query.bindValue(":partNum", mrsNumberToDelete);
           query.bindValue(":manf", mrsNumberToDelete);
           query.bindValue(":qty", mrsNumberToDelete);
           query.bindValue(":authB", mrsNumberToDelete);
           query.exec();

           if (query.exec())
           {
               QMessageBox::information(this, "Deletion", "ISN successfully deleted!");
           }
           else {
               QMessageBox::critical(this, "Failed", "Deletion failed!");
           }


           db.commit();
       }
}
