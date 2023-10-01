#ifndef EDIT_PART_H
#define EDIT_PART_H

#include <QDialog>

namespace Ui {
class edit_part;
}

class edit_part : public QDialog
{
    Q_OBJECT

public:
    explicit edit_part(QWidget *parent = 0);
    ~edit_part();

private:
    Ui::edit_part *ui;
};

#endif // EDIT_PART_H
