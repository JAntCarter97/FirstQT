/********************************************************************************
** Form generated from reading UI file 'firstqt.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTQT_H
#define UI_FIRSTQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FirstQTClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FirstQTClass)
    {
        if (FirstQTClass->objectName().isEmpty())
            FirstQTClass->setObjectName(QStringLiteral("FirstQTClass"));
        FirstQTClass->resize(600, 400);
        centralWidget = new QWidget(FirstQTClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(230, 130, 131, 61));
        FirstQTClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FirstQTClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        FirstQTClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FirstQTClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        FirstQTClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FirstQTClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FirstQTClass->setStatusBar(statusBar);

        retranslateUi(FirstQTClass);

        QMetaObject::connectSlotsByName(FirstQTClass);
    } // setupUi

    void retranslateUi(QMainWindow *FirstQTClass)
    {
        FirstQTClass->setWindowTitle(QApplication::translate("FirstQTClass", "FirstQT", 0));
        pushButton->setText(QApplication::translate("FirstQTClass", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class FirstQTClass: public Ui_FirstQTClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTQT_H
