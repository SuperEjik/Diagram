/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *Inductance_calculator;
    QAction *Dean_number_calculator;
    QAction *actionL_N;
    QAction *actionL_nu;
    QAction *actionL_R;
    QAction *actionL_r;
    QAction *actionL_h;
    QAction *actiontest;
    QAction *actionDe_p;
    QAction *actionDe_D;
    QAction *actionDe_v;
    QAction *actionDe_nu;
    QAction *actionDe_r;
    QAction *action;
    QAction *actiontest_2;
    QAction *actCascade;
    QAction *actTile;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab1;
    QMdiArea *mdiArea;
    QMenuBar *menubar;
    QMenu *Graph;
    QMenu *menu;
    QMenu *Calculator;
    QMenu *View;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1495, 759);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        Inductance_calculator = new QAction(MainWindow);
        Inductance_calculator->setObjectName(QString::fromUtf8("Inductance_calculator"));
        Dean_number_calculator = new QAction(MainWindow);
        Dean_number_calculator->setObjectName(QString::fromUtf8("Dean_number_calculator"));
        actionL_N = new QAction(MainWindow);
        actionL_N->setObjectName(QString::fromUtf8("actionL_N"));
        actionL_nu = new QAction(MainWindow);
        actionL_nu->setObjectName(QString::fromUtf8("actionL_nu"));
        actionL_R = new QAction(MainWindow);
        actionL_R->setObjectName(QString::fromUtf8("actionL_R"));
        actionL_r = new QAction(MainWindow);
        actionL_r->setObjectName(QString::fromUtf8("actionL_r"));
        actionL_h = new QAction(MainWindow);
        actionL_h->setObjectName(QString::fromUtf8("actionL_h"));
        actiontest = new QAction(MainWindow);
        actiontest->setObjectName(QString::fromUtf8("actiontest"));
        actionDe_p = new QAction(MainWindow);
        actionDe_p->setObjectName(QString::fromUtf8("actionDe_p"));
        actionDe_D = new QAction(MainWindow);
        actionDe_D->setObjectName(QString::fromUtf8("actionDe_D"));
        actionDe_v = new QAction(MainWindow);
        actionDe_v->setObjectName(QString::fromUtf8("actionDe_v"));
        actionDe_nu = new QAction(MainWindow);
        actionDe_nu->setObjectName(QString::fromUtf8("actionDe_nu"));
        actionDe_r = new QAction(MainWindow);
        actionDe_r->setObjectName(QString::fromUtf8("actionDe_r"));
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        actiontest_2 = new QAction(MainWindow);
        actiontest_2->setObjectName(QString::fromUtf8("actiontest_2"));
        actCascade = new QAction(MainWindow);
        actCascade->setObjectName(QString::fromUtf8("actCascade"));
        actTile = new QAction(MainWindow);
        actTile->setObjectName(QString::fromUtf8("actTile"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setEnabled(true);
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(211);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setMinimumSize(QSize(189, 0));
        tabWidget->setMaximumSize(QSize(191, 16777215));
        tab1 = new QWidget();
        tab1->setObjectName(QString::fromUtf8("tab1"));
        tabWidget->addTab(tab1, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        mdiArea = new QMdiArea(centralwidget);
        mdiArea->setObjectName(QString::fromUtf8("mdiArea"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mdiArea->sizePolicy().hasHeightForWidth());
        mdiArea->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(mdiArea, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1495, 21));
        Graph = new QMenu(menubar);
        Graph->setObjectName(QString::fromUtf8("Graph"));
        menu = new QMenu(Graph);
        menu->setObjectName(QString::fromUtf8("menu"));
        Calculator = new QMenu(menubar);
        Calculator->setObjectName(QString::fromUtf8("Calculator"));
        View = new QMenu(menubar);
        View->setObjectName(QString::fromUtf8("View"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(Graph->menuAction());
        menubar->addAction(Calculator->menuAction());
        menubar->addAction(View->menuAction());
        Graph->addAction(menu->menuAction());
        menu->addAction(actionDe_p);
        menu->addAction(actionDe_D);
        menu->addAction(actionDe_v);
        menu->addAction(actionDe_nu);
        menu->addAction(actionDe_r);
        Calculator->addAction(Dean_number_calculator);
        View->addAction(actCascade);
        View->addAction(actTile);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Graphs", nullptr));
        Inductance_calculator->setText(QCoreApplication::translate("MainWindow", "\320\230\320\275\320\264\321\203\320\272\321\202\320\270\320\262\320\275\320\276\321\201\321\202\321\214", nullptr));
        Dean_number_calculator->setText(QCoreApplication::translate("MainWindow", "\320\247\320\270\321\201\320\273\320\276 \320\224\320\270\320\275\320\260", nullptr));
        actionL_N->setText(QCoreApplication::translate("MainWindow", "L \320\276\321\202 N", nullptr));
        actionL_nu->setText(QCoreApplication::translate("MainWindow", "L \320\276\321\202 \302\265", nullptr));
        actionL_R->setText(QCoreApplication::translate("MainWindow", "L \320\276\321\202 R", nullptr));
        actionL_r->setText(QCoreApplication::translate("MainWindow", "L \320\276\321\202 r", nullptr));
        actionL_h->setText(QCoreApplication::translate("MainWindow", "L \320\276\321\202 h", nullptr));
        actiontest->setText(QCoreApplication::translate("MainWindow", "test", nullptr));
        actionDe_p->setText(QCoreApplication::translate("MainWindow", "De \320\276\321\202 p", nullptr));
        actionDe_D->setText(QCoreApplication::translate("MainWindow", "De \320\276\321\202 D", nullptr));
        actionDe_v->setText(QCoreApplication::translate("MainWindow", "De \320\276\321\202 v", nullptr));
        actionDe_nu->setText(QCoreApplication::translate("MainWindow", "De \320\276\321\202 \316\274", nullptr));
        actionDe_r->setText(QCoreApplication::translate("MainWindow", "De \320\276\321\202 r", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\321\202\320\265\321\201\321\202", nullptr));
        actiontest_2->setText(QCoreApplication::translate("MainWindow", "test", nullptr));
        actCascade->setText(QCoreApplication::translate("MainWindow", "\320\232\320\260\321\201\320\272\320\260\320\264", nullptr));
        actTile->setText(QCoreApplication::translate("MainWindow", "\320\237\320\273\320\270\321\202\320\272\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab1), QString());
        Graph->setTitle(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\263\321\200\320\260\321\204\320\270\320\272 \321\207\320\270\321\201\320\273\320\260 \320\224\320\270\320\275\320\260", nullptr));
        Calculator->setTitle(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        View->setTitle(QCoreApplication::translate("MainWindow", "\320\222\320\270\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
