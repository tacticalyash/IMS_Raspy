#ifndef GENERATEMRS_H
#define GENERATEMRS_H

#include "mrsmodel.h"

#include <QDialog>

namespace Ui {
class generateMRS;
}

class generateMRS : public QDialog
{
    Q_OBJECT

public:
    explicit generateMRS(QWidget *parent = 0);
    ~generateMRS();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();


    void on_pushButton_insert_in_inventory_clicked();

    void on_pushButton_ref_clicked();

    void on_pushButton_rem_clicked();

    void on_pushButton_add_qt_inventory_clicked();

private:
    Ui::generateMRS *ui;
    MrsModel *mModel;
};

#endif // GENERATEMRS_H
