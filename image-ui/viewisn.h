#ifndef VIEWISN_H
#define VIEWISN_H

#include <QDialog>
//#include <QTablewidget>
#include <QVBoxLayout>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>
#include <QCompleter>
#include <QScrollArea>
#include <QTextDocument>

namespace Ui {
class viewISN;
}

class viewISN : public QDialog
{
    Q_OBJECT

public:
    explicit viewISN(QWidget *parent = 0);
    //void on_pushButton_save_PDF_clicked(QPaintEvent *event) override;

    ~viewISN();

private slots:
    void on_pushButton_Search_clicked();

    void on_pushButton_Delete_ISN_clicked();

    void on_pushButton_ref_clicked();
    void onLineEditTextChanged(const QString &);
    QString getISN_detail(QString str,QString searchText);

    void on_pushButton_save_PDF_clicked();

    void on_pushButton_Print_ISN_clicked();


private:
    Ui::viewISN *ui;
    QCompleter* completer;
    QSqlQueryModel* completerModel;

    QScrollArea* scrollArea;
    QWidget* contentWidget;

    QString generateTextTable(QSqlQueryModel *model);
    QString generateDocxXmlContent(QTextDocument* doc);
};

#endif // VIEWISN_H
