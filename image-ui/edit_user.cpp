#include "edit_user.h"
#include "ui_edit_user.h"

edit_user::edit_user(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edit_user)
{
    ui->setupUi(this);
}

edit_user::~edit_user()
{
    delete ui;
}
