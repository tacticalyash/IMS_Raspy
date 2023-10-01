#ifndef VIEWINVOICE_H
#define VIEWINVOICE_H

#include <QWidget>

namespace Ui {
class viewInvoice;
}

class viewInvoice : public QWidget
{
    Q_OBJECT

public:
    explicit viewInvoice(QWidget *parent = 0);
    ~viewInvoice();

private:
    Ui::viewInvoice *ui;
};

#endif // VIEWINVOICE_H
