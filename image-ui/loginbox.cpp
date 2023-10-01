#include "loginbox.h"
#include "ui_loginbox.h"
#include "ui_mainwindow.h"
#include <QStackedWidget>
#include <QMessageBox>
#include <QTableWidget>
#include <QVBoxLayout>
#include <QTableView>
#include <QStandardItemModel>
#include <QSqlQueryModel>
#include <QDebug>

loginBox::loginBox( QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginBox),

    m_stackedWidget(nullptr)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint | Qt::WindowCloseButtonHint);



    ui->lineEdit_2->clear();
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);





}

loginBox::~loginBox()
{
    delete ui;

}


void loginBox::on_pushButton_clicked()
{

    QString username,Password;
    username = ui->lineEdit->text();
    Password = ui->lineEdit_2->text();


    QSqlQuery qry;
    if(qry.exec("select * from Login where User_Name = '"+ username +"' and Password='"+ Password +"'"))
    {

        int count = 0;
        while(qry.next())
        {
            count++;

        }
        if(count==1)
        {

            m_userName = qry.value(0).toString();
            m_userType = qry.value(2).toString();
            MainWindow *mywid = new MainWindow();
            mywid->showMaximized();
            mywid->on_user_login(m_userName, m_userType);
            connect(this,&loginBox::go,mywid,&MainWindow::setMenu);

            emit go();

            hide();




        }


        if(count>1){
            QMessageBox::warning(this, "Invalid Login", " username or password are duplicate");


        }

        if(count<1){
            QMessageBox::warning(this, "Invalid Login", "Invalid username or password.");

        }

    }
    else {
        QMessageBox::warning(this, "Invalid Login", "Invalid username or password.");
    }




    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
}

QString loginBox::getusername(){
    return m_userName;
}


QString loginBox::getUserType()
{
    return m_userType;
}




