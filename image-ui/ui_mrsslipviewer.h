/********************************************************************************
** Form generated from reading UI file 'mrsslipviewer.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MRSSLIPVIEWER_H
#define UI_MRSSLIPVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MRSslipViewer
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_print;
    QPushButton *pushButton_del_MRS;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_search_mrs;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton_refresh;

    void setupUi(QDialog *MRSslipViewer)
    {
        if (MRSslipViewer->objectName().isEmpty())
            MRSslipViewer->setObjectName(QStringLiteral("MRSslipViewer"));
        MRSslipViewer->resize(1111, 530);
        gridLayout = new QGridLayout(MRSslipViewer);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textBrowser = new QTextBrowser(MRSslipViewer);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(MRSslipViewer);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"\n"
"	\n"
"\n"
"	font: 14pt \"Times New Roman\";  \n"
"\n"
"		border-right: 1px solid #aaaaaa;\n"
"\n"
"		border-bottom: 1px solid #aaaaaa;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:enabled {\n"
"\n"
"		background-color: green;\n"
"\n"
"		color: white;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"\n"
"		background-color: green;\n"
"\n"
"		color: white;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QPushButton:hover:!pressed {\n"
"\n"
"		background-color: ORANGE;\n"
"\n"
"		color: red;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:disabled {\n"
"\n"
"		background-color: #aaaaaa;\n"
"\n"
"		color: #ffffff;\n"
"\n"
"}"));

        horizontalLayout->addWidget(pushButton);

        pushButton_print = new QPushButton(MRSslipViewer);
        pushButton_print->setObjectName(QStringLiteral("pushButton_print"));
        pushButton_print->setFont(font);
        pushButton_print->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"\n"
"	\n"
"\n"
"	font: 14pt \"Times New Roman\";  \n"
"\n"
"		border-right: 1px solid #aaaaaa;\n"
"\n"
"		border-bottom: 1px solid #aaaaaa;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:enabled {\n"
"\n"
"		background-color: green;\n"
"\n"
"		color: white;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"\n"
"		background-color: green;\n"
"\n"
"		color: white;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QPushButton:hover:!pressed {\n"
"\n"
"		background-color: ORANGE;\n"
"\n"
"		color: red;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:disabled {\n"
"\n"
"		background-color: #aaaaaa;\n"
"\n"
"		color: #ffffff;\n"
"\n"
"}"));

        horizontalLayout->addWidget(pushButton_print);

        pushButton_del_MRS = new QPushButton(MRSslipViewer);
        pushButton_del_MRS->setObjectName(QStringLiteral("pushButton_del_MRS"));
        pushButton_del_MRS->setFont(font);
        pushButton_del_MRS->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"\n"
"	\n"
"\n"
"	font: 14pt \"Times New Roman\";  \n"
"\n"
"		border-right: 1px solid #aaaaaa;\n"
"\n"
"		border-bottom: 1px solid #aaaaaa;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:enabled {\n"
"\n"
"		background-color: green;\n"
"\n"
"		color: white;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"\n"
"		background-color: green;\n"
"\n"
"		color: white;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QPushButton:hover:!pressed {\n"
"\n"
"		background-color: ORANGE;\n"
"\n"
"		color: red;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:disabled {\n"
"\n"
"		background-color: #aaaaaa;\n"
"\n"
"		color: #ffffff;\n"
"\n"
"}"));

        horizontalLayout->addWidget(pushButton_del_MRS);

        horizontalSpacer = new QSpacerItem(108, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_search_mrs = new QPushButton(MRSslipViewer);
        pushButton_search_mrs->setObjectName(QStringLiteral("pushButton_search_mrs"));
        pushButton_search_mrs->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_search_mrs->setIcon(icon);
        pushButton_search_mrs->setIconSize(QSize(25, 25));

        horizontalLayout->addWidget(pushButton_search_mrs);

        label = new QLabel(MRSslipViewer);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(MRSslipViewer);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QFont font2;
        font2.setPointSize(14);
        lineEdit->setFont(font2);
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

        pushButton_refresh = new QPushButton(MRSslipViewer);
        pushButton_refresh->setObjectName(QStringLiteral("pushButton_refresh"));
        pushButton_refresh->setFont(font);
        pushButton_refresh->setStyleSheet(QLatin1String("\n"
"QPushButton{\n"
"\n"
"	\n"
"\n"
"	font: 14pt \"Times New Roman\";  \n"
"\n"
"		border-right: 1px solid #aaaaaa;\n"
"\n"
"		border-bottom: 1px solid #aaaaaa;\n"
"\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:enabled {\n"
"\n"
"		background-color: green;\n"
"\n"
"		color: white;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"\n"
"		background-color: green;\n"
"\n"
"		color: white;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QPushButton:hover:!pressed {\n"
"\n"
"		background-color: ORANGE;\n"
"\n"
"		color: red;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:disabled {\n"
"\n"
"		background-color: #aaaaaa;\n"
"\n"
"		color: #ffffff;\n"
"\n"
"}"));

        horizontalLayout->addWidget(pushButton_refresh);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(MRSslipViewer);

        QMetaObject::connectSlotsByName(MRSslipViewer);
    } // setupUi

    void retranslateUi(QDialog *MRSslipViewer)
    {
        MRSslipViewer->setWindowTitle(QApplication::translate("MRSslipViewer", "MRS Slip Viewer", 0));
        pushButton->setText(QApplication::translate("MRSslipViewer", "Save as PDF", 0));
        pushButton_print->setText(QApplication::translate("MRSslipViewer", "Print", 0));
        pushButton_del_MRS->setText(QApplication::translate("MRSslipViewer", "Delete Current MRS", 0));
        pushButton_search_mrs->setText(QString());
        label->setText(QApplication::translate("MRSslipViewer", "SELECT MRS", 0));
        pushButton_refresh->setText(QApplication::translate("MRSslipViewer", "REFRESH", 0));
    } // retranslateUi

};

namespace Ui {
    class MRSslipViewer: public Ui_MRSslipViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MRSSLIPVIEWER_H
