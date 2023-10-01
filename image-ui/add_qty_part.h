#ifndef ADD_QTY_PART_H
#define ADD_QTY_PART_H

#include <QDialog>

namespace Ui {
class add_qty_part;
}

class add_qty_part : public QDialog
{
    Q_OBJECT

public:
    explicit add_qty_part(QWidget *parent = 0);
    ~add_qty_part();
    void handlechange();

private slots:
    void on_pushButton_addPart_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_add_new_proj_clicked();

    void on_pushButton_ref_clicked();

    void on_pushButton_calender_clicked();

private:
    Ui::add_qty_part *ui;
};

#endif // ADD_QTY_PART_H
