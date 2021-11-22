/********************************************************************************
** Form generated from reading UI file 'inductance_menu.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INDUCTANCE_MENU_H
#define UI_INDUCTANCE_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_inductance_menu
{
public:
    QLineEdit *lineEdit_r;
    QLabel *label_h;
    QLineEdit *lineEdit_h;
    QLabel *label_L;
    QTextEdit *textEdit_L;
    QLabel *label_nu;
    QLineEdit *lineEdit_nu;
    QLabel *label_R;
    QLineEdit *lineEdit_R;
    QLabel *label_r;
    QLabel *label_N;
    QLineEdit *lineEdit_N;
    QPushButton *calculation_inductance;

    void setupUi(QWidget *inductance_menu)
    {
        if (inductance_menu->objectName().isEmpty())
            inductance_menu->setObjectName(QString::fromUtf8("inductance_menu"));
        inductance_menu->resize(188, 255);
        lineEdit_r = new QLineEdit(inductance_menu);
        lineEdit_r->setObjectName(QString::fromUtf8("lineEdit_r"));
        lineEdit_r->setGeometry(QRect(49, 110, 131, 27));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(14);
        lineEdit_r->setFont(font);
        label_h = new QLabel(inductance_menu);
        label_h->setObjectName(QString::fromUtf8("label_h"));
        label_h->setGeometry(QRect(11, 143, 32, 21));
        label_h->setFont(font);
        lineEdit_h = new QLineEdit(inductance_menu);
        lineEdit_h->setObjectName(QString::fromUtf8("lineEdit_h"));
        lineEdit_h->setGeometry(QRect(49, 143, 131, 27));
        lineEdit_h->setFont(font);
        label_L = new QLabel(inductance_menu);
        label_L->setObjectName(QString::fromUtf8("label_L"));
        label_L->setGeometry(QRect(11, 176, 32, 21));
        label_L->setFont(font);
        textEdit_L = new QTextEdit(inductance_menu);
        textEdit_L->setObjectName(QString::fromUtf8("textEdit_L"));
        textEdit_L->setGeometry(QRect(49, 176, 131, 27));
        textEdit_L->setReadOnly(true);
        label_nu = new QLabel(inductance_menu);
        label_nu->setObjectName(QString::fromUtf8("label_nu"));
        label_nu->setGeometry(QRect(11, 44, 32, 21));
        label_nu->setFont(font);
        lineEdit_nu = new QLineEdit(inductance_menu);
        lineEdit_nu->setObjectName(QString::fromUtf8("lineEdit_nu"));
        lineEdit_nu->setGeometry(QRect(49, 44, 131, 27));
        lineEdit_nu->setFont(font);
        label_R = new QLabel(inductance_menu);
        label_R->setObjectName(QString::fromUtf8("label_R"));
        label_R->setGeometry(QRect(11, 77, 32, 21));
        label_R->setFont(font);
        lineEdit_R = new QLineEdit(inductance_menu);
        lineEdit_R->setObjectName(QString::fromUtf8("lineEdit_R"));
        lineEdit_R->setGeometry(QRect(49, 77, 131, 27));
        lineEdit_R->setFont(font);
        label_r = new QLabel(inductance_menu);
        label_r->setObjectName(QString::fromUtf8("label_r"));
        label_r->setGeometry(QRect(11, 110, 32, 21));
        label_r->setFont(font);
        label_N = new QLabel(inductance_menu);
        label_N->setObjectName(QString::fromUtf8("label_N"));
        label_N->setGeometry(QRect(11, 11, 32, 21));
        label_N->setFont(font);
        lineEdit_N = new QLineEdit(inductance_menu);
        lineEdit_N->setObjectName(QString::fromUtf8("lineEdit_N"));
        lineEdit_N->setGeometry(QRect(49, 11, 131, 27));
        lineEdit_N->setFont(font);
        calculation_inductance = new QPushButton(inductance_menu);
        calculation_inductance->setObjectName(QString::fromUtf8("calculation_inductance"));
        calculation_inductance->setGeometry(QRect(49, 210, 131, 27));

        retranslateUi(inductance_menu);

        QMetaObject::connectSlotsByName(inductance_menu);
    } // setupUi

    void retranslateUi(QWidget *inductance_menu)
    {
        inductance_menu->setWindowTitle(QCoreApplication::translate("inductance_menu", "Form", nullptr));
        label_h->setText(QCoreApplication::translate("inductance_menu", "h = ", nullptr));
        label_L->setText(QCoreApplication::translate("inductance_menu", "L = ", nullptr));
        label_nu->setText(QCoreApplication::translate("inductance_menu", "\302\265 = ", nullptr));
        label_R->setText(QCoreApplication::translate("inductance_menu", "R =", nullptr));
        label_r->setText(QCoreApplication::translate("inductance_menu", "r = ", nullptr));
        label_N->setText(QCoreApplication::translate("inductance_menu", "N =", nullptr));
        calculation_inductance->setText(QCoreApplication::translate("inductance_menu", "\320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214 \320\263\321\200\320\260\321\204\320\270\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class inductance_menu: public Ui_inductance_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INDUCTANCE_MENU_H
