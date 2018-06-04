/********************************************************************************
** Form generated from reading UI file 'fucking1.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUCKING1_H
#define UI_FUCKING1_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QListView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fucking1Class
{
public:
    QWidget *centralWidget;
    QDialogButtonBox *buttonBox;
    QRadioButton *radioButton;
    QListView *listView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *fucking1Class)
    {
        if (fucking1Class->objectName().isEmpty())
            fucking1Class->setObjectName(QString::fromUtf8("fucking1Class"));
        fucking1Class->resize(600, 400);
        centralWidget = new QWidget(fucking1Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        buttonBox = new QDialogButtonBox(centralWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(60, 190, 193, 28));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(140, 50, 115, 19));
        listView = new QListView(centralWidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(260, 70, 256, 192));
        fucking1Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(fucking1Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 26));
        fucking1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(fucking1Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        fucking1Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(fucking1Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        fucking1Class->setStatusBar(statusBar);

        retranslateUi(fucking1Class);

        QMetaObject::connectSlotsByName(fucking1Class);
    } // setupUi

    void retranslateUi(QMainWindow *fucking1Class)
    {
        fucking1Class->setWindowTitle(QApplication::translate("fucking1Class", "fucking1", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("fucking1Class", "RadioButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class fucking1Class: public Ui_fucking1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUCKING1_H
