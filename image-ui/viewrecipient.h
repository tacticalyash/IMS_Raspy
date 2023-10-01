#ifndef VIEWRECIPIENT_H
#define VIEWRECIPIENT_H

#include <QDialog>

namespace Ui {
class viewRecipient;
}

class viewRecipient : public QDialog
{
    Q_OBJECT

public:
    explicit viewRecipient(QWidget *parent = 0);
    ~viewRecipient();

private slots:
    int retrieveTableIDFromDatabase(const QString& projectName);
    void onProjectDoubleClick(const QModelIndex& );

    void on_pushButton_cancel_clicked();

private:
    Ui::viewRecipient *ui;
};

#endif // VIEWRECIPIENT_H
