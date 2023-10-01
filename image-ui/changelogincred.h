#ifndef CHANGELOGINCRED_H
#define CHANGELOGINCRED_H

#include <QDialog>

namespace Ui {
class changeLoginCred;
}

class changeLoginCred : public QDialog
{
    Q_OBJECT

public:
    explicit changeLoginCred(QWidget *parent = 0);
    ~changeLoginCred();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::changeLoginCred *ui;
};

#endif // CHANGELOGINCRED_H
