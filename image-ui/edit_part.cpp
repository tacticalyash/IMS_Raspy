
// this source file kept for immediate use for Parts_Details editing row data in the database.

#include "edit_part.h"
#include "ui_edit_part.h"
#include "addpartstoporject.h"
#include "ui_addpartstoporject.h"
#include <QtGui/QScreen>
#include<QVBoxLayout>
#include "viewinvo.h"
#include "addnewpart.h"
#include "add_qty_part.h"
#include "add_user.h"
#include "edit_user.h"
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

edit_part::edit_part(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edit_part)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::WindowMinimizeButtonHint  | Qt::WindowCloseButtonHint);



    /*connect(tableView->selectionModel(), &QItemSelectionModel::selectionChanged, [this]() {
        // Get the selected row in the table view
        QModelIndexList selectedIndexes = tableView->selectionModel()->selectedIndexes();
        if (selectedIndexes.isEmpty()) {
            return; // No row is selected
        }
        QModelIndex selectedIndex = selectedIndexes.first();

        // Get the data for the selected row
        QVariantList rowData;
        for (int i = 0; i < ui->tableView->model()->columnCount(); i++) {
            QModelIndex index = tableView->model()->index(selectedIndex.row(), i);
            rowData.append(tableView->model()->data(index));
        }

        // Update the line edit fields in the "Edit Part" UI screen with the data from the selected row
        ui->lineEdit_partName->setText(rowData.at(0).toString());
        ui->lineEdit_PartNumber->setText(rowData.at(1).toString());
        ui->lineEdit_des->setText(rowData.at(2).toString());
        ui->lineEdit_footprint->setText(rowData.at(3).toString());
        ui->lineEdit_Grade->setText(rowData.at(4).toString());
        ui->lineEdit_Min_qty->setText(rowData.at(5).toString());
        ui->lineEdit_Value->setText(rowData.at(6).toString());
        ui->lineEdit_temp->setText(rowData.at(7).toString());
        ui->lineEdit_AvailableQty->setText(rowData.at(8).toString());
        ui->lineEdit_location->setText(rowData.at(9).toString());
    });*/

    QSqlDatabase loginDB = QSqlDatabase::addDatabase("QSQLITE");

    loginDB.setDatabaseName("/home/pi/Desktop/database.sqlite");

    if(!loginDB.open()){
        qDebug()<<"FAILED !!";
    }
    else {
        qDebug()<<"Connected ...";
    }
    QSqlQuery query;
    query.prepare("SELECT Manufacturer FROM Parts_Tracker");
    if(query.exec()) {
        while(query.next()) {
            // Fetch the column data from the query result
            QString columnData = query.value(0).toString();
            // Add the column data to the combo box
            ui->comboBox_descrp->addItem(columnData);
        }
    } else {
        // Error handling if query execution fails
        qDebug() << "Error fetching column data: " << query.lastError().text();
    }

}

edit_part::~edit_part()
{
    delete ui;
}
