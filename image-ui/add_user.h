#ifndef ADD_USER_H
#define ADD_USER_H
#include "manageprojects.h"
#include <QDialog>
#include <QSql>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>
#include <QPdfWriter>
#include <QPainter>
#include <QPdfWriter>
#include <QFile>
#include <QFileDialog>
#include <QDialogButtonBox>
#include <QDebug>
#include <QSqlTableModel>
#include <QStringListModel>
#include <QCompleter>
#include <QStandardItemModel>
#include <QSortFilterProxyModel>
#include <QSqlRecord>
#include <QFormLayout>

namespace Ui {
class add_user;
}

class add_user : public QDialog
{
    Q_OBJECT


public slots:




public:
    explicit add_user(QString productTableName, QWidget *parent = 0);
    //explicit add_user(QWidget* parent = nullptr);

    QString proj_name2;

    QString kal;
    void openUiTwo();


    ~add_user();


private slots:




    void on_pushButton_moveTo_project_clicked();

    void on_pushButton_refresh_all_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_search_inv_clicked();


    void on_pushButton_allmove_inventory_clicked();

    void on_pushButton_issued_clicked();

private:
    Ui::add_user *ui;
    add_user *addo;

    QSqlDatabase mdb;
    int is_part_exist(QString displayedTable, QString partN,QString qty_column);
    void insert_part(QString displayedTable, QString partN, QString Manufact, QString Alloc_qty);
    void update_part(QString displayedTable, QString partN, QString Alloc_qty);
    void update_part_inventory(QString partN, int change);
};

#endif // ADD_USER_H
