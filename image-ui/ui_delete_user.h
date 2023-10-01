/********************************************************************************
** Form generated from reading UI file 'delete_user.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE_USER_H
#define UI_DELETE_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Delete_user
{
public:
    QTextBrowser *textBrowser;

    void setupUi(QDialog *Delete_user)
    {
        if (Delete_user->objectName().isEmpty())
            Delete_user->setObjectName(QStringLiteral("Delete_user"));
        Delete_user->resize(1124, 422);
        textBrowser = new QTextBrowser(Delete_user);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(90, 11, 931, 361));

        retranslateUi(Delete_user);

        QMetaObject::connectSlotsByName(Delete_user);
    } // setupUi

    void retranslateUi(QDialog *Delete_user)
    {
        Delete_user->setWindowTitle(QApplication::translate("Delete_user", "DELETE USER", 0));
    } // retranslateUi

};

namespace Ui {
    class Delete_user: public Ui_Delete_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE_USER_H
