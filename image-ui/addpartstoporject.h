#ifndef ADDPARTSTOPORJECT_H
#define ADDPARTSTOPORJECT_H

#include <QDialog>
#include "add_user.h"


namespace Ui {
class addPartsToPorject;
}

class addPartsToPorject : public QDialog
{
    Q_OBJECT

public:
    explicit addPartsToPorject(const QString& partNumber,QWidget *parent = 0);
    void setStoredTable(const QString& table_name);
    ~addPartsToPorject();


private slots:
    void on_pushButton_ok_clicked();

private:
    Ui::addPartsToPorject *ui;
    QString Stored_table;
    QString part_number;
};

#endif // ADDPARTSTOPORJECT_H
