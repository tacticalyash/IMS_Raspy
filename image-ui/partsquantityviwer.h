#ifndef PARTSQUANTITYVIWER_H
#define PARTSQUANTITYVIWER_H

#include <QDialog>

namespace Ui {
class partsQuantityViwer;
}

class partsQuantityViwer : public QDialog
{
    Q_OBJECT

public:
    explicit partsQuantityViwer(QWidget *parent = 0);
    ~partsQuantityViwer();

private slots:
    void on_pushButton_refresh_clicked();

    void on_pushButton_search_clicked();

    void on_pushButton_show_low_parts_clicked();

private:
    Ui::partsQuantityViwer *ui;
};

#endif // PARTSQUANTITYVIWER_H
