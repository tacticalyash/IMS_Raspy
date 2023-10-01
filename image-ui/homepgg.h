#ifndef HOMEPGG_H
#define HOMEPGG_H

#include <QWidget>

namespace Ui {
class homepgg;
}

class homepgg : public QWidget
{
    Q_OBJECT

public:
    explicit homepgg(QWidget *parent = 0);
    ~homepgg();
   // void  TableWidgetDisplay();

private:
    Ui::homepgg *ui;
};

#endif // HOMEPGG_H
