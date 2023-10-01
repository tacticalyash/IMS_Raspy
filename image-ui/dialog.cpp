#include "dialog.h"
#include "ui_dialog.h"
#include "mainwindow.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint);

}

Dialog::~Dialog()
{
    delete ui;
}

