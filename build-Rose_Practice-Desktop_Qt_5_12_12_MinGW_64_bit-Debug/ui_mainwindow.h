/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *Scale_Dark;
    QLabel *InsideCircle_Dark;
    QLabel *Course_Dark;
    QLabel *Arc_Dark;
    QLabel *DegreeLabel_Dark;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Scale_Dark = new QLabel(centralwidget);
        Scale_Dark->setObjectName(QString::fromUtf8("Scale_Dark"));
        Scale_Dark->setGeometry(QRect(120, 30, 501, 511));
        InsideCircle_Dark = new QLabel(centralwidget);
        InsideCircle_Dark->setObjectName(QString::fromUtf8("InsideCircle_Dark"));
        InsideCircle_Dark->setGeometry(QRect(350, 240, 47, 13));
        Course_Dark = new QLabel(centralwidget);
        Course_Dark->setObjectName(QString::fromUtf8("Course_Dark"));
        Course_Dark->setGeometry(QRect(40, 40, 501, 511));
        Arc_Dark = new QLabel(centralwidget);
        Arc_Dark->setObjectName(QString::fromUtf8("Arc_Dark"));
        Arc_Dark->setGeometry(QRect(350, 290, 47, 13));
        DegreeLabel_Dark = new QLabel(centralwidget);
        DegreeLabel_Dark->setObjectName(QString::fromUtf8("DegreeLabel_Dark"));
        DegreeLabel_Dark->setGeometry(QRect(370, 240, 47, 13));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(710, 540, 80, 21));
        MainWindow->setCentralWidget(centralwidget);
        Scale_Dark->raise();
        Course_Dark->raise();
        InsideCircle_Dark->raise();
        Arc_Dark->raise();
        DegreeLabel_Dark->raise();
        pushButton->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        Scale_Dark->setText(QString());
        InsideCircle_Dark->setText(QString());
        Course_Dark->setText(QString());
        Arc_Dark->setText(QString());
        DegreeLabel_Dark->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
