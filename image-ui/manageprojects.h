#ifndef MANAGEPROJECTS_H
#define MANAGEPROJECTS_H

#include <QDialog>
#include "add_user.h"
namespace Ui {
class manageProjects;
}

class manageProjects : public QDialog
{
    Q_OBJECT

public:
    explicit manageProjects(QWidget *parent = 0);
    ~manageProjects();

    QString projectNam;

 //   add_user* userInstance = new add_user();

signals:
    void projectNameChanged(const QString& projectName);
Q_SIGNALS:
    void buttonClicked();

private slots:
    void on_pushButton_add_project_clicked();

    void on_pushButton_Delete_project_clicked();
void deleteProject(const QString& );
    void on_pushButton_edit_project_clicked();
void onProjectDoubleClick(const QModelIndex& );

void on_pushButton_refresh_clicked();

private:
    Ui::manageProjects *ui;
};

#endif // MANAGEPROJECTS_H
