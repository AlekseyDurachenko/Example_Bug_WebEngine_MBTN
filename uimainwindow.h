/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWebEngineWidgets/QWebEngineView>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWebEngineView *webView;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *url1_lineEdit;
    QPushButton *url1_pushButton;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *url2_lineEdit;
    QPushButton *url2_pushButton;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *clear_pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *copy_pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(706, 612);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        webView = new QWebEngineView(centralwidget);
        webView->setObjectName("webView");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(webView->sizePolicy().hasHeightForWidth());
        webView->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(webView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        url1_lineEdit = new QLineEdit(centralwidget);
        url1_lineEdit->setObjectName("url1_lineEdit");

        horizontalLayout_2->addWidget(url1_lineEdit);

        url1_pushButton = new QPushButton(centralwidget);
        url1_pushButton->setObjectName("url1_pushButton");

        horizontalLayout_2->addWidget(url1_pushButton);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        url2_lineEdit = new QLineEdit(centralwidget);
        url2_lineEdit->setObjectName("url2_lineEdit");
        url2_lineEdit->setReadOnly(true);

        horizontalLayout_3->addWidget(url2_lineEdit);

        url2_pushButton = new QPushButton(centralwidget);
        url2_pushButton->setObjectName("url2_pushButton");

        horizontalLayout_3->addWidget(url2_pushButton);


        verticalLayout->addLayout(horizontalLayout_3);

        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setMaximumSize(QSize(16777215, 150));
        plainTextEdit->setLineWrapMode(QPlainTextEdit::LineWrapMode::NoWrap);

        verticalLayout->addWidget(plainTextEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        clear_pushButton = new QPushButton(centralwidget);
        clear_pushButton->setObjectName("clear_pushButton");

        horizontalLayout->addWidget(clear_pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        copy_pushButton = new QPushButton(centralwidget);
        copy_pushButton->setObjectName("copy_pushButton");

        horizontalLayout->addWidget(copy_pushButton);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 706, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(url1_lineEdit, url1_pushButton);
        QWidget::setTabOrder(url1_pushButton, url2_lineEdit);
        QWidget::setTabOrder(url2_lineEdit, url2_pushButton);
        QWidget::setTabOrder(url2_pushButton, plainTextEdit);
        QWidget::setTabOrder(plainTextEdit, clear_pushButton);
        QWidget::setTabOrder(clear_pushButton, copy_pushButton);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        url1_lineEdit->setText(QCoreApplication::translate("MainWindow", "https://raw.githubusercontent.com/AlekseyDurachenko/Example_Bug_WebEngine_MBTN/refs/heads/master/1.html", nullptr));
        url1_pushButton->setText(QCoreApplication::translate("MainWindow", "Open 1", nullptr));
        url2_lineEdit->setText(QCoreApplication::translate("MainWindow", "https://raw.githubusercontent.com/AlekseyDurachenko/Example_Bug_WebEngine_MBTN/refs/heads/master/2.html", nullptr));
        url2_pushButton->setText(QCoreApplication::translate("MainWindow", "Open 2", nullptr));
        clear_pushButton->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        copy_pushButton->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
