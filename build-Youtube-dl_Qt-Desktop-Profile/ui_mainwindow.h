/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *dwnBtn;
    QPushButton *pushButton;
    QLineEdit *linkBox;
    QCheckBox *cleanChk;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QLabel *label_2;
    QLabel *linkNum;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(763, 554);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 200, 121, 21));
        dwnBtn = new QPushButton(centralWidget);
        dwnBtn->setObjectName(QStringLiteral("dwnBtn"));
        dwnBtn->setGeometry(QRect(190, 440, 83, 23));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 440, 111, 23));
        linkBox = new QLineEdit(centralWidget);
        linkBox->setObjectName(QStringLiteral("linkBox"));
        linkBox->setGeometry(QRect(150, 260, 201, 61));
        cleanChk = new QCheckBox(centralWidget);
        cleanChk->setObjectName(QStringLiteral("cleanChk"));
        cleanChk->setGeometry(QRect(410, 270, 90, 21));
        checkBox_2 = new QCheckBox(centralWidget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(410, 290, 90, 21));
        checkBox_3 = new QCheckBox(centralWidget);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(410, 320, 90, 21));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(400, 120, 101, 16));
        linkNum = new QLabel(centralWidget);
        linkNum->setObjectName(QStringLiteral("linkNum"));
        linkNum->setGeometry(QRect(490, 120, 62, 15));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 763, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Put links here:", Q_NULLPTR));
        dwnBtn->setText(QApplication::translate("MainWindow", "Download!", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Store for later", Q_NULLPTR));
        cleanChk->setText(QApplication::translate("MainWindow", "Clean Name", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("MainWindow", "smart download", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("MainWindow", "unused_now", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Links Loaded:", Q_NULLPTR));
        linkNum->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
