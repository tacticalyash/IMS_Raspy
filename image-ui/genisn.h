#ifndef GENISN_H
#define GENISN_H

#include <QDialog>

namespace Ui {
class GenISN;
}

class GenISN : public QDialog
{
    Q_OBJECT

public:
    explicit GenISN(QWidget *parent = 0);
    void handlechange() ;
    ~GenISN();

private slots:
    void on_pushButton_gen_slip_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_add_lineditData_clicked();

    void on_pushButton_fetch_table_clicked();

    void on_pushButton_clicked();

private:
    Ui::GenISN *ui;
};

#endif // GENISN_H
