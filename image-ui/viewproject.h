#ifndef VIEWPROJECT_H
#define VIEWPROJECT_H

#include <QDialog>

namespace Ui {
class ViewProject;
}

class ViewProject : public QDialog
{
    Q_OBJECT

public:
    explicit ViewProject(QWidget *parent = 0);
    ~ViewProject();

private slots:
    void on_pushButton_3_clicked();
    void onProjectDoubleClick(const QModelIndex& );
    int retrieveTableIDFromDatabase(const QString& );

    void on_pushButton_cancel_clicked();

private:
    Ui::ViewProject *ui;
};

#endif // VIEWPROJECT_H
