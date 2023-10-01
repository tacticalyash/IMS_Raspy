#ifndef MANAGERECIPIENTS_H
#define MANAGERECIPIENTS_H

#include <QDialog>
#include <QObject>

namespace Ui {
class manageRecipients;
}

class manageRecipients : public QDialog
{
    Q_OBJECT

public:
    explicit manageRecipients(QWidget *parent = 0);
    ~manageRecipients();

private slots:

    void deleteRecipients(const QString& );

    void on_pushButton_addRecipients_clicked();

    void on_pushButton_rename_recipients_clicked();

    void on_pushButton_edit_clicked();

    void on_pushButton_delete_recipients_clicked();

    void on_pushButton_refresh_clicked();

private:
    Ui::manageRecipients *ui;
};

#endif // MANAGERECIPIENTS_H
