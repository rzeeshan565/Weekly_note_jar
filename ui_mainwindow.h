/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_change_dir;
    QPushButton *pushButton_save;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_lastM;
    QLineEdit *lineEdit_date;
    QTextEdit *textEdit_event;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(523, 290);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_change_dir = new QPushButton(centralwidget);
        pushButton_change_dir->setObjectName(QString::fromUtf8("pushButton_change_dir"));
        pushButton_change_dir->setGeometry(QRect(280, 210, 99, 24));
        pushButton_save = new QPushButton(centralwidget);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        pushButton_save->setGeometry(QRect(400, 210, 75, 24));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(190, 40, 291, 157));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_lastM = new QLineEdit(widget);
        lineEdit_lastM->setObjectName(QString::fromUtf8("lineEdit_lastM"));

        verticalLayout_2->addWidget(lineEdit_lastM);

        lineEdit_date = new QLineEdit(widget);
        lineEdit_date->setObjectName(QString::fromUtf8("lineEdit_date"));

        verticalLayout_2->addWidget(lineEdit_date);

        textEdit_event = new QTextEdit(widget);
        textEdit_event->setObjectName(QString::fromUtf8("textEdit_event"));

        verticalLayout_2->addWidget(textEdit_event);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 70, 108, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 50, 71, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 100, 84, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 523, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_change_dir->setText(QCoreApplication::translate("MainWindow", "Change directory", nullptr));
        pushButton_save->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Date(DD/MM/YYYY)", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Last Entry on:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Event/Highlight", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
