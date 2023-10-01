#include "delete_part.h"
#include "ui_delete_part.h"

delete_part::delete_part(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::delete_part)
{
    ui->setupUi(this);
}

delete_part::~delete_part()
{
    delete ui;
}
