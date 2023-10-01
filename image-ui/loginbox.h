#ifndef LOGINBOX_H
#define LOGINBOX_H

#include <QDialog>
#include <QStackedWidget>
#include "mainwindow.h"
#include <QTableWidget>
#include <QSql>
#include <QTableView>
#include<QSqlDatabase>
#include<QSqlQuery>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QTableView>
#include <QDebug>
#include <qtableview.h>
//class MainWindow;

namespace Ui {
class loginBox;
}

class loginBox : public QDialog
{
    Q_OBJECT

signals:
    void loginButtonClicked();
     void authenticated();
     void loginSuccess();
     void go();//to mainwindow
     void indexOne();

public:
    explicit loginBox( QWidget *parent=0);
    ~loginBox();
 void TableWidgetDisplay();
 QString getusername();
 QString getUserType();

private slots:
    void on_pushButton_clicked();





private:
    Ui::loginBox *ui;
    //MainWindow *m_mainWindow;
    QStackedWidget *m_stackedWidget;
    QString m_userType;
    QString m_userName;
    loginBox *m_loginBo;
};

#endif // LOGINBOX_H
