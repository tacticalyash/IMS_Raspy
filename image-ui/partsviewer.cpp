#include "partsviewer.h"
#include "ui_partsviewer.h"
#include <QTableWidget>
#include <QVBoxLayout>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>

partsViewer::partsViewer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::partsViewer)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint | Qt::WindowCloseButtonHint);


}

partsViewer::~partsViewer()
{
    delete ui;
}
