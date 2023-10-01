#include "viewinvoice.h"
#include "ui_viewinvoice.h"

viewInvoice::viewInvoice(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::viewInvoice)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint | Qt::WindowCloseButtonHint);

}

viewInvoice::~viewInvoice()
{
    delete ui;
}
