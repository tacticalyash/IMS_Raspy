#ifndef MRSSLIPVIEWER_H
#define MRSSLIPVIEWER_H

#include <QDialog>
#include <QTableWidget>
#include <QVBoxLayout>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QCompleter>
#include <QSqlRecord>
#include <QSqlQueryModel>
#include <QSortFilterProxyModel>
#include <QStringList>
#include <QMessageBox>
#include <QInputDialog>

namespace Ui {
class MRSslipViewer;
}

class MRSslipViewer : public QDialog
{
    Q_OBJECT

public:
    explicit MRSslipViewer(QWidget *parent = 0);
    ~MRSslipViewer();

private slots:


    void onLineEditTextChanged(const QString &);



    void on_pushButton_refresh_clicked();

    QString getISN_detail(QString str,QString searchText);

    void on_pushButton_clicked();

    QString generateTextTable(QSqlQueryModel *model);
    void on_pushButton_del_MRS_clicked();

private:
    Ui::MRSslipViewer *ui;
    QCompleter* completer;
    QSqlQueryModel* completerModel;
};

#endif // MRSSLIPVIEWER_H
