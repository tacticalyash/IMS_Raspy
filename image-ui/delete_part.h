#ifndef DELETE_PART_H
#define DELETE_PART_H

#include <QDialog>

namespace Ui {
class delete_part;
}

class delete_part : public QDialog
{
    Q_OBJECT

public:
    explicit delete_part(QWidget *parent = 0);
    ~delete_part();

private:
    Ui::delete_part *ui;
};

#endif // DELETE_PART_H
