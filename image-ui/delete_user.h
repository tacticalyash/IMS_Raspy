#ifndef DELETE_USER_H
#define DELETE_USER_H

#include <QDialog>

namespace Ui {
class Delete_user;
}

class Delete_user : public QDialog
{
    Q_OBJECT

public:
    explicit Delete_user(QWidget *parent = 0);
    ~Delete_user();

private:
    Ui::Delete_user *ui;
};

#endif // DELETE_USER_H
