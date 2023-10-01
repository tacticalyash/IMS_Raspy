/********************************************************************************
** Form generated from reading UI file 'manageprojects.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEPROJECTS_H
#define UI_MANAGEPROJECTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_manageProjects
{
public:
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QPushButton *pushButton_add_project;
    QPushButton *pushButton_rename_project;
    QPushButton *pushButton_edit_project;
    QPushButton *pushButton_Delete_project;
    QPushButton *pushButton_refresh;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *manageProjects)
    {
        if (manageProjects->objectName().isEmpty())
            manageProjects->setObjectName(QStringLiteral("manageProjects"));
        manageProjects->resize(1015, 576);
        verticalLayout = new QVBoxLayout(manageProjects);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableView = new QTableView(manageProjects);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setStyleSheet(QLatin1String("QTableView {\n"
"    border: 1px solid #d9d9d9;\n"
"    background-color: #ffffff;\n"
"    padding: 0;\n"
"    gridline-color: #d9d9d9;\n"
"}\n"
"\n"
"QTableView::item {\n"
"    padding: 5px;\n"
"    border: none;\n"
"}\n"
"\n"
"QTableView::item:selected {\n"
"    background-color: #3e7bb6;\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #f2f2f2;\n"
"    color: #333333;\n"
"    padding: 5px;\n"
"    font-weight: bold;\n"
"    border: none;\n"
"    border-right: 1px solid #d9d9d9;\n"
"    border-bottom: 1px solid #d9d9d9;\n"
"    min-width: 80px;\n"
"    min-height: 30px;\n"
"}\n"
"\n"
"QHeaderView::section:checked {\n"
"    background-color: #3e7bb6;\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"QHeaderView::section:pressed {\n"
"    background-color: #3e7bb6;\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"QHeaderView::section:first {\n"
"    border-top-left-radius: 5px;\n"
"}\n"
"\n"
"QHeaderView::section:last {\n"
"    border-top-right-radius: 5px;\n"
"    border-right: none;\n"
"}\n"
""
                        "\n"
"QHeaderView::section:middle {\n"
"    border-right: none;\n"
"}\n"
"\n"
"QTableView::horizontalHeader {\n"
"    border-top: 1px solid #d9d9d9;\n"
"    border-bottom: 1px solid #d9d9d9;\n"
"}\n"
"\n"
"QTableView::verticalHeader {\n"
"    border-right: 1px solid #d9d9d9;\n"
"}\n"
"\n"
"QHeaderView::section:horizontal {\n"
"    background-color: #e2e2e2;\n"
"    border-top: 1px solid #9d9d9d;\n"
"}\n"
"\n"
"QHeaderView::section:horizontal:pressed {\n"
"    background-color: #3e7bb6;\n"
"    color: #ffffff;\n"
"}\n"
""));

        verticalLayout->addWidget(tableView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(manageProjects);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(40, 40));

        horizontalLayout->addWidget(pushButton);

        lineEdit = new QLineEdit(manageProjects);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(16);
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 1px solid #a9a9a9;\n"
"    padding: 5px;\n"
"    border-radius: 10px; /* Adjust the value to control the roundness */\n"
"    background-color: #ffffff; /* Set the background color to white */\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #3e7bb6;\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    background-color: #e6f3ff; /* Set the hover background color to light blue */\n"
"    animation: blink 0.5s alternate infinite; /* Add a blinking animation */\n"
"}\n"
"\n"
"@keyframes blink {\n"
"    from {\n"
"        background-color: #e6f3ff;\n"
"    }\n"
"    to {\n"
"        background-color: #ffffff;\n"
"    }\n"
"}\n"
""));

        horizontalLayout->addWidget(lineEdit);

        pushButton_add_project = new QPushButton(manageProjects);
        pushButton_add_project->setObjectName(QStringLiteral("pushButton_add_project"));
        QFont font1;
        font1.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setWeight(50);
        pushButton_add_project->setFont(font1);

        horizontalLayout->addWidget(pushButton_add_project);

        pushButton_rename_project = new QPushButton(manageProjects);
        pushButton_rename_project->setObjectName(QStringLiteral("pushButton_rename_project"));
        pushButton_rename_project->setFont(font1);

        horizontalLayout->addWidget(pushButton_rename_project);

        pushButton_edit_project = new QPushButton(manageProjects);
        pushButton_edit_project->setObjectName(QStringLiteral("pushButton_edit_project"));
        pushButton_edit_project->setFont(font1);

        horizontalLayout->addWidget(pushButton_edit_project);

        pushButton_Delete_project = new QPushButton(manageProjects);
        pushButton_Delete_project->setObjectName(QStringLiteral("pushButton_Delete_project"));
        pushButton_Delete_project->setFont(font1);

        horizontalLayout->addWidget(pushButton_Delete_project);

        pushButton_refresh = new QPushButton(manageProjects);
        pushButton_refresh->setObjectName(QStringLiteral("pushButton_refresh"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_refresh->setIcon(icon1);
        pushButton_refresh->setIconSize(QSize(40, 40));

        horizontalLayout->addWidget(pushButton_refresh);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(278, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(manageProjects);

        QMetaObject::connectSlotsByName(manageProjects);
    } // setupUi

    void retranslateUi(QDialog *manageProjects)
    {
        manageProjects->setWindowTitle(QApplication::translate("manageProjects", "Manage Projects", 0));
        pushButton->setText(QString());
        pushButton_add_project->setText(QApplication::translate("manageProjects", "NEW", 0));
        pushButton_rename_project->setText(QApplication::translate("manageProjects", "RENAME", 0));
        pushButton_edit_project->setText(QApplication::translate("manageProjects", "EDIT", 0));
        pushButton_Delete_project->setText(QApplication::translate("manageProjects", "DELETE", 0));
        pushButton_refresh->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class manageProjects: public Ui_manageProjects {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEPROJECTS_H
