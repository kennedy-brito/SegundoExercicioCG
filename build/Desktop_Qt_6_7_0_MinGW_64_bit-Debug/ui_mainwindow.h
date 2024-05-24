/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <glwidget.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    GLWidget *widget;
    QGroupBox *groupBox;
    QPushButton *upButton;
    QPushButton *leftButton;
    QPushButton *downButton;
    QPushButton *rightButton;
    QGroupBox *groupBox_2;
    QPushButton *clockwiseButton;
    QPushButton *anticlockButton;
    QGroupBox *groupBox_3;
    QPushButton *raiseHeightBtn;
    QPushButton *lowerHeightBtn;
    QPushButton *plusWidthBtn;
    QPushButton *minusWidthBtn;
    QMenuBar *menubar;
    QMenu *menuTransformations;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new GLWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 70, 431, 351));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(530, 350, 251, 171));
        upButton = new QPushButton(groupBox);
        upButton->setObjectName("upButton");
        upButton->setGeometry(QRect(70, 30, 71, 31));
        upButton->setCursor(QCursor(Qt::PointingHandCursor));
        leftButton = new QPushButton(groupBox);
        leftButton->setObjectName("leftButton");
        leftButton->setGeometry(QRect(20, 80, 61, 29));
        downButton = new QPushButton(groupBox);
        downButton->setObjectName("downButton");
        downButton->setGeometry(QRect(70, 130, 71, 31));
        downButton->setCursor(QCursor(Qt::PointingHandCursor));
        rightButton = new QPushButton(groupBox);
        rightButton->setObjectName("rightButton");
        rightButton->setGeometry(QRect(120, 80, 71, 31));
        rightButton->setCursor(QCursor(Qt::PointingHandCursor));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(530, 170, 251, 171));
        clockwiseButton = new QPushButton(groupBox_2);
        clockwiseButton->setObjectName("clockwiseButton");
        clockwiseButton->setGeometry(QRect(20, 60, 141, 31));
        clockwiseButton->setCursor(QCursor(Qt::PointingHandCursor));
        anticlockButton = new QPushButton(groupBox_2);
        anticlockButton->setObjectName("anticlockButton");
        anticlockButton->setGeometry(QRect(20, 110, 141, 31));
        anticlockButton->setCursor(QCursor(Qt::PointingHandCursor));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(530, 10, 241, 141));
        raiseHeightBtn = new QPushButton(groupBox_3);
        raiseHeightBtn->setObjectName("raiseHeightBtn");
        raiseHeightBtn->setGeometry(QRect(0, 40, 101, 31));
        lowerHeightBtn = new QPushButton(groupBox_3);
        lowerHeightBtn->setObjectName("lowerHeightBtn");
        lowerHeightBtn->setGeometry(QRect(0, 90, 101, 31));
        plusWidthBtn = new QPushButton(groupBox_3);
        plusWidthBtn->setObjectName("plusWidthBtn");
        plusWidthBtn->setGeometry(QRect(120, 40, 111, 31));
        minusWidthBtn = new QPushButton(groupBox_3);
        minusWidthBtn->setObjectName("minusWidthBtn");
        minusWidthBtn->setGeometry(QRect(120, 90, 111, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuTransformations = new QMenu(menubar);
        menuTransformations->setObjectName("menuTransformations");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuTransformations->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Translate", nullptr));
        upButton->setText(QCoreApplication::translate("MainWindow", "Up", nullptr));
        leftButton->setText(QCoreApplication::translate("MainWindow", "Left", nullptr));
        downButton->setText(QCoreApplication::translate("MainWindow", "Down", nullptr));
        rightButton->setText(QCoreApplication::translate("MainWindow", "Right", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Rotate", nullptr));
        clockwiseButton->setText(QCoreApplication::translate("MainWindow", "Clockwise", nullptr));
        anticlockButton->setText(QCoreApplication::translate("MainWindow", "AntiClowise", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Scale", nullptr));
        raiseHeightBtn->setText(QCoreApplication::translate("MainWindow", "raise height", nullptr));
        lowerHeightBtn->setText(QCoreApplication::translate("MainWindow", "lower height", nullptr));
        plusWidthBtn->setText(QCoreApplication::translate("MainWindow", "increase width", nullptr));
        minusWidthBtn->setText(QCoreApplication::translate("MainWindow", "decrease width", nullptr));
        menuTransformations->setTitle(QCoreApplication::translate("MainWindow", "Transformations", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
