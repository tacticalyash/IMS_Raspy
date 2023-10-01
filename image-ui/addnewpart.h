#ifndef ADDNEWPART_H
#define ADDNEWPART_H

#include <QDialog>

namespace Ui {
class addNewPart;
}

class addNewPart : public QDialog
{
    Q_OBJECT

public:
    explicit addNewPart(QWidget *parent = 0);
    ~addNewPart();
    void handlechange();

private slots:
    void on_pushButton_add_clicked();

    void on_pushButton_clear_clicked();

    void on_pushButton_addnew_proj_clicked();

    void on_pushButton_calender_clicked();

private:
    Ui::addNewPart *ui;
};

#endif // ADDNEWPART_H
