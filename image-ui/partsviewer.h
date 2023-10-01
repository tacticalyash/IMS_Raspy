#ifndef PARTSVIEWER_H
#define PARTSVIEWER_H

#include <QDialog>

namespace Ui {
class partsViewer;
}

class partsViewer : public QDialog
{
    Q_OBJECT

public:
    explicit partsViewer(QWidget *parent = 0);
    ~partsViewer();

private:
    Ui::partsViewer *ui;
};

#endif // PARTSVIEWER_H
