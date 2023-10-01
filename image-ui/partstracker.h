#ifndef PARTSTRACKER_H
#define PARTSTRACKER_H

#include <QDialog>

namespace Ui {
class partsTracker;
}

class partsTracker : public QDialog
{
    Q_OBJECT

public:
    explicit partsTracker(QWidget *parent = 0);
    ~partsTracker();

private slots:
    void on_pushButton_refresh_clicked();

    void on_pushButton_search_clicked();

private:
    Ui::partsTracker *ui;
};

#endif // PARTSTRACKER_H
