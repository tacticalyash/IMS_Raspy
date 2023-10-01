#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAction>
#include <QStackedWidget>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "loginbox.h"
#include <QSqlTableModel>
#include "add_user.h"
#include "manageprojects.h"
#include "ui_mainwindow.h"

namespace Ui {
class MainWindow;
}

class loginBox;

class MainWindow : public QMainWindow
{
    Q_OBJECT

signals:
    void op();

public:
    explicit MainWindow(QWidget *parent = nullptr);
    void on_user_login(QString userName, QString userType);

    ~MainWindow();
public slots:
    void setMenuBarEnabled(bool enabled);

    void setMenu();

    void openIndex_1();







private slots:


    void on_pushButton_clicked();


    void DB_backup();

    void on_authLogin_button_clicked();


    void QTY_viewer();
    void add_partt_QTYY();


    void add_newPart();
    void viewMRSS();
    void GenMRSS();
    void ViewInwardSN();
    void GenInwardSN();
    void changeLog();
    void manageRecip();
    void viewRecip();
    void manageProj();
    void viewProj();
    void showPartsQTY();
    void showPartsTracker();
    void showViewInvoices();


    //void editData(const QModelIndex& index);
    //void saveData(const QModelIndex& index);

    void on_LogOut_button_clicked();





    void on_pushButton_search_clicked();

    void on_pushButton_refresh_clicked();


    void enableMenuBar();


    void on_pushButton_editPart_clicked();
    void showContextMenu(const QPoint &pos);

    void on_pushButton_del_partt_clicked();

private:
    Ui::MainWindow *ui;
    //loginBox *m_loginBox;
    QAction *m_viewInvoicesAction;
    QSqlTableModel *model;
    //QStackedWidget *m_stackedWidget;
     //loginBox *m_open_login_box;
   // loginBox *userNaam ;
    QString m_userType;
    QString m_userName;




};

#endif // MAINWINDOW_H
