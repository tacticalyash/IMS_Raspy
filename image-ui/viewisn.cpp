#include "viewisn.h"
#include "ui_viewisn.h"
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
#include <QTextBlock>
#include <QXmlStreamReader>
#include <QTextDocumentWriter>
#include <QStandardPaths>
#include <QProcess>
viewISN::viewISN(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewISN)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint | Qt::WindowCloseButtonHint);





     QSqlQueryModel * modal = new QSqlQueryModel();
     QSqlQuery *qry = new QSqlQuery();

     qry->prepare("select * from ISN_Manager");

     if (!qry->exec()) {

         return;
     }

     modal->setQuery(*qry);






     completer = new QCompleter(this);
     completer->setCaseSensitivity(Qt::CaseInsensitive); // Set case sensitivity
     ui->lineEdit_isn_select->setCompleter(completer);


      completerModel = new QSqlQueryModel(this);
     completer->setModel(completerModel);


     connect(ui->lineEdit_isn_select, &QLineEdit::textChanged, this, &viewISN::onLineEditTextChanged);
}

viewISN::~viewISN()
{
    delete ui;
}

void viewISN::on_pushButton_Search_clicked()
{

    QString searchText = ui->lineEdit_isn_select->text();


       QSqlQueryModel *model = new QSqlQueryModel();


       QSqlQuery query;

       query.prepare("SELECT inv.* FROM ISN_Manager isn JOIN Invoices inv ON isn.Invoice_Number = inv.Invoice_Number WHERE isn.ISN_Number = :searchText");
       query.bindValue(":searchText", searchText);
       query.exec();


       model->setQuery(query);

       auto str = QString("<html><head></head><body><p style=\"text-align: center;font-family: Times New Roman;font-size: 26px;\">INWARD STORE NOTE</p> "
                          "<hr style=\"width=\\\"50%\\\" >\""
                          "<pre style='font-size: 24px; font-family: Times New Roman;'>ISN No: {{isn_number}}                                                                                                                                                 Invoice Number :{{INVNUM}} </p>"
                          "<pre style='font-size: 24px; font-family: Times New Roman;'>Supplier: {{supplier_num}}                                                                                                                                                 Date: {{DATE_OI}}</p>"
                          "<pre style='font-size: 24px; font-family: Times New Roman;'>Our Order Ref No: {{OOR}}                                                                                                                                                  Invoice Date :{{DATEINV}}</p>"
                          "<hr style=\"width=\\\"50%\\\" >\""
                          "%1"
                          "<hr style=\"width=\\\"50%\\\" >\""
                          "<pre style='font-size: 24px; font-family: Times New Roman;'>Inspection Marks:- {{Insp}} </p>"
                          "<pre style='font-size: 24px; font-family: Times New Roman;'>IR Number:- {{IRn}}</p>"
                          "<pre style='font-size: 24px; font-family: Times New Roman;'>I/CQA/User Dept                                                                                                                                                            Taken Into Stock By</p>"
                          "</body></html>");




       str = getISN_detail(str,searchText);
       ui->textBrowser->setHtml(str.arg(generateTextTable(model)));

}

QString viewISN::getISN_detail(QString str,QString searchText){
    QSqlQuery query;


    searchText = ui->lineEdit_isn_select->text();
    query.prepare("SELECT isn.ISN_Number, isn.Supplier, isn.Our_Order_Reference, isn.Date, "
                      "isn.Invoice_Number, isn.Inspection, isn.IR_Number, inv.Date "
                      "FROM ISN_Manager isn "
                      "INNER JOIN Invoices inv ON isn.Invoice_Number = inv.Invoice_Number "
                      "WHERE isn.ISN_Number = :searchText");
    query.bindValue(":searchText", searchText);
    query.exec();

    if(query.next()){
        str= str.replace("{{isn_number}}",query.value(0).toString());
        str= str.replace("{{supplier_num}}",query.value(1).toString());
        str= str.replace("{{OOR}}",query.value(2).toString());
        str= str.replace("{{DATE_OI}}",query.value(3).toString());
        str= str.replace("{{INVNUM}}",query.value(4).toString());
        str= str.replace("{{Insp}}",query.value(5).toString());
        str= str.replace("{{IRn}}",query.value(6).toString());
        str= str.replace("{{DATEINV}}",query.value(7).toString());

    }


    return str;

}

void viewISN::on_pushButton_Delete_ISN_clicked()
{


    QString isnNumberToDelete = ui->lineEdit_isn_select->text(); // Replace with the ISN_Number value to delete


       QMessageBox::StandardButton confirmDelete;
       confirmDelete = QMessageBox::question(this, "Confirm Deletion", "Are you sure you want to delete the ISN_Number?", QMessageBox::Yes | QMessageBox::No);

       if (confirmDelete == QMessageBox::Yes) {


           QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
            db.setDatabaseName("/home/pi/Desktop/database.sqlite");
           if (!db.open()) {
               qDebug() << "not opened";

           }


           db.transaction();


           QString deleteQuery = "DELETE FROM ISN_Manager WHERE ISN_Number = :isnNumber";
           QSqlQuery query(db);
           query.prepare(deleteQuery);
           query.bindValue(":isnNumber", isnNumberToDelete);
           query.exec();


           deleteQuery = "DELETE FROM ISN_Manager WHERE Supplier = :supplier AND Date = :date AND Invoice_Number = :invoice_num AND Our_Order_Reference = :oor AND Inspection = :insp AND IR_Number = :ir";
           query.prepare(deleteQuery);
           query.bindValue(":supplier", isnNumberToDelete);
           query.bindValue(":date", isnNumberToDelete);
           query.bindValue(":invoice_num", isnNumberToDelete);
           query.bindValue(":oor", isnNumberToDelete);
           query.bindValue(":insp", isnNumberToDelete);
           query.bindValue(":ir", isnNumberToDelete);
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

void viewISN::on_pushButton_ref_clicked()
{



     QSqlQueryModel * modal = new QSqlQueryModel();
     QSqlQuery *qry = new QSqlQuery();

     qry->prepare("select * from ISN_Manager");

     if (!qry->exec()) {

         return;
     }

     modal->setQuery(*qry);


}
void viewISN::onLineEditTextChanged(const QString &text) {
    QSqlQuery query;
    query.prepare("SELECT ISN_Number FROM ISN_Manager WHERE ISN_Number LIKE :text");
    query.bindValue(":text", "%" + text + "%");
    query.exec();
    completerModel = new QSqlQueryModel(this);
    completerModel->setQuery(query);
    completer->setModel(completerModel);
    completer->setCompletionMode(QCompleter::PopupCompletion);
}


void viewISN::on_pushButton_save_PDF_clicked()
{



    QTextDocument* doc = ui->textBrowser->document();


       QPrinter printer(QPrinter::HighResolution);


       printer.setOutputFormat(QPrinter::PdfFormat);
       QString filePath = QFileDialog::getSaveFileName(this, "Save PDF", QString(), "*.pdf");
       if (filePath.isEmpty()) {
           return;
       }
       printer.setOutputFileName(filePath);
       printer.setResolution(180);


       QPainter painter;
       painter.begin(&printer);
       doc->drawContents(&painter);
       painter.end();
       QMessageBox::information(this, "PDF Saved", "The PDF has been saved.");
}


void viewISN::on_pushButton_Print_ISN_clicked()
{




   }

QString viewISN::generateDocxXmlContent(QTextDocument* doc)
{

    QString xmlContent;

    xmlContent += "<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"yes\"?>\n";
    xmlContent += "<w:document xmlns:w=\"http://schemas.openxmlformats.org/wordprocessingml/2006/main\">\n";
    xmlContent += "<w:body>\n";


    QByteArray htmlData = doc->toHtml().toUtf8();


    QXmlStreamReader xmlReader(htmlData);
    while (!xmlReader.atEnd() && !xmlReader.hasError()) {
        if (xmlReader.isStartElement() && xmlReader.name() == "p") {
            QString paragraphContent;

            while (!(xmlReader.isEndElement() && xmlReader.name() == "p") && !xmlReader.atEnd()) {
                xmlReader.readNext();
                if (xmlReader.isCharacters()) {
                    QString text = xmlReader.text().toString();
                    paragraphContent += text;
                }
            }


            xmlContent += "<w:p><w:r><w:t>" + paragraphContent + "</w:t></w:r></w:p>\n";
        }

        xmlReader.readNext();
    }


    xmlContent += "</w:body>\n";
    xmlContent += "</w:document>\n";

    return xmlContent;
}


QString viewISN::generateTextTable(QSqlQueryModel *model)
{
    QString tableStr = "<table align=\"center\" border=\"1\" cellpadding=\"1\" cellspacing=\"1\" dir=\"ltr\" id=\"ysTable\" style=\"width:180%\">";

    const int rowCount = model->rowCount();
    QStringList headers;
    for(int c = 0; c < model->columnCount(); ++c)
        headers.append(model->headerData(c, Qt::Horizontal).toString());
    const int columnPartNumberIndex = headers.indexOf("Part_Number");
    const int columnManufIndex = headers.indexOf("Manufacturer");
    const int columnQtyIndex = headers.indexOf("Qty_Added");

    tableStr += "<tr>";
    tableStr += "<th width='7%' style='font-family: Times New Roman;'>SL No</th> ";
    tableStr += "<th width='40%' style='font-family: Times New Roman;'>Part Number</th>";
    tableStr += "<th width='40%' style='font-family: Times New Roman;'>Manufacturer</th>";
    tableStr += "<th width='40%' style='font-family: Times New Roman;'>Qty</th>";

    tableStr += "</tr>";
    for(int r = 0; r < rowCount; ++r)
    {
        QString rowStr = "<tr> <td style='font-size: 20px'> " + QString::number(r+1) + "</td>";
        rowStr += "<td style='font-size: 20px'>" + model->data(model->index(r, columnPartNumberIndex)).toString()+ "</td>";
        rowStr += "<td style='font-size: 20px'>" + model->data(model->index(r, columnManufIndex)).toString()+ "</td>";
        rowStr += "<td style='font-size: 20px'>" + model->data(model->index(r, columnQtyIndex)).toString()+ "</td>";
        rowStr += "</tr>";
        tableStr += rowStr;
    }
    tableStr += "</table>";
    return tableStr;






}
