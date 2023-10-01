#include "delete_user.h"
#include "ui_delete_user.h"

Delete_user::Delete_user(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Delete_user)
{
    ui->setupUi(this);
}

Delete_user::~Delete_user()
{
    delete ui;
}
