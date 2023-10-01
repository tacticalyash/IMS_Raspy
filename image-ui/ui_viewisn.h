/********************************************************************************
** Form generated from reading UI file 'viewisn.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWISN_H
#define UI_VIEWISN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_viewISN
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_save_PDF;
    QPushButton *pushButton_Print_ISN;
    QPushButton *pushButton_Delete_ISN;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLineEdit *lineEdit_isn_select;
    QPushButton *pushButton_Search;
    QPushButton *pushButton_ref;

    void setupUi(QDialog *viewISN)
    {
        if (viewISN->objectName().isEmpty())
            viewISN->setObjectName(QStringLiteral("viewISN"));
        viewISN->resize(1348, 538);
        verticalLayout = new QVBoxLayout(viewISN);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textBrowser = new QTextBrowser(viewISN);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_save_PDF = new QPushButton(viewISN);
        pushButton_save_PDF->setObjectName(QStringLiteral("pushButton_save_PDF"));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        pushButton_save_PDF->setFont(font);
        pushButton_save_PDF->setStyleSheet(QLatin1String("\n"
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

        horizontalLayout->addWidget(pushButton_save_PDF);

        pushButton_Print_ISN = new QPushButton(viewISN);
        pushButton_Print_ISN->setObjectName(QStringLiteral("pushButton_Print_ISN"));
        pushButton_Print_ISN->setFont(font);
        pushButton_Print_ISN->setStyleSheet(QLatin1String("\n"
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

        horizontalLayout->addWidget(pushButton_Print_ISN);

        pushButton_Delete_ISN = new QPushButton(viewISN);
        pushButton_Delete_ISN->setObjectName(QStringLiteral("pushButton_Delete_ISN"));
        pushButton_Delete_ISN->setFont(font);
        pushButton_Delete_ISN->setStyleSheet(QLatin1String("\n"
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

        horizontalLayout->addWidget(pushButton_Delete_ISN);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(viewISN);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setPointSize(14);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        lineEdit_isn_select = new QLineEdit(viewISN);
        lineEdit_isn_select->setObjectName(QStringLiteral("lineEdit_isn_select"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_isn_select->sizePolicy().hasHeightForWidth());
        lineEdit_isn_select->setSizePolicy(sizePolicy);
        lineEdit_isn_select->setFont(font1);
        lineEdit_isn_select->setStyleSheet(QLatin1String("QLineEdit {\n"
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
""));

        horizontalLayout->addWidget(lineEdit_isn_select);

        pushButton_Search = new QPushButton(viewISN);
        pushButton_Search->setObjectName(QStringLiteral("pushButton_Search"));
        pushButton_Search->setFont(font1);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Search->setIcon(icon);
        pushButton_Search->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(pushButton_Search);

        pushButton_ref = new QPushButton(viewISN);
        pushButton_ref->setObjectName(QStringLiteral("pushButton_ref"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_ref->setIcon(icon1);
        pushButton_ref->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(pushButton_ref);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(viewISN);

        QMetaObject::connectSlotsByName(viewISN);
    } // setupUi

    void retranslateUi(QDialog *viewISN)
    {
        viewISN->setWindowTitle(QApplication::translate("viewISN", "View ISN", 0));
        textBrowser->setHtml(QApplication::translate("viewISN", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'PibotoLt'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:7.8pt;\"><br /></p></body></html>", 0));
        pushButton_save_PDF->setText(QApplication::translate("viewISN", "Save as PDF", 0));
        pushButton_Print_ISN->setText(QApplication::translate("viewISN", "Print", 0));
        pushButton_Delete_ISN->setText(QApplication::translate("viewISN", "Delete Current ISN", 0));
        label->setText(QApplication::translate("viewISN", "SELECT ISN", 0));
        pushButton_Search->setText(QString());
        pushButton_ref->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class viewISN: public Ui_viewISN {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWISN_H
