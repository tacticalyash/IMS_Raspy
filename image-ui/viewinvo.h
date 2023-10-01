#ifndef VIEWINVO_H
#define VIEWINVO_H

#include <QTableWidget>
#include <QVBoxLayout>

#include <QDialog>
#include "mainwindow.h"
#include <QCompleter>
#include <QSortFilterProxyModel>
#include <QSqlTableModel>

namespace Ui {
class viewInvo;
}

class viewInvo : public QDialog
{
    Q_OBJECT

public:
    explicit viewInvo(QWidget *parent = 0);
    ~viewInvo();

private slots:
    void on_pushButton_refresh_clicked();

  //  void on_comboBox_activated(const QString &arg1);
   // void onCompleterActivated(QString text);

    void on_pushButton_8_clicked();

    void on_pushButton_invo_clicked();

    void on_pushButton_Manufacturer_clicked();

    void on_pushButton_PartNo_clicked();

    void on_pushButton_Date_clicked();

    void on_pushButton_Comment_clicked();

    void on_pushButton_QTY_clicked();

private:
    Ui::viewInvo *ui;
    QVBoxLayout* layout;
    MainWindow *m_mainWindow;
    QSqlQueryModel* m_query_model;
    QCompleter* m_completer;
    QSortFilterProxyModel* m_proxy_model;
    QSqlTableModel* nb;

};

#endif // VIEWINVO_H
