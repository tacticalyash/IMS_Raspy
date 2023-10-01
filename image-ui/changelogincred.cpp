#include "changelogincred.h"
#include "ui_changelogincred.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>

changeLoginCred::changeLoginCred(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::changeLoginCred)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::WindowMinimizeButtonHint  | Qt::WindowCloseButtonHint);

}

changeLoginCred::~changeLoginCred()
{
    delete ui;
}

void changeLoginCred::on_pushButton_clicked()
{

    QSqlQuery qry;
    QString newUser,newPwd,newUserType;
    newUser=ui->lineEdit_new_user->text();
    newPwd=ui->lineEdit_new_pwd->text();
    ui->lineEdit_type->setPlaceholderText("e.g Admin,SuperUser");
    newUserType = ui->lineEdit_type->text();



    qry.prepare("insert into users_login (Username,Password) values ('"+ newUser +"','"+ newPwd +"')");


    if(qry.exec()){
        QMessageBox::critical(this,tr("Save"),tr("saved"));
    }
    else {
        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }
}

void changeLoginCred::on_pushButton_2_clicked()
{


    QSqlQuery qry2;
    QString oldUser,oldPwd;
    oldUser=ui->lineEdit_del_user->text();
    oldPwd=ui->lineEdit_old_pwd->text();

    qry2.prepare("DELETE FROM users_login WHERE Username=:oldUser AND Password=:oldPwd");
       qry2.bindValue(":oldUser", oldUser);
       qry2.bindValue(":oldPwd", oldPwd);

       if(qry2.exec()){
               QMessageBox::critical(this,tr("Delete"),tr("deleted"));
           }
           else {

           }


}
