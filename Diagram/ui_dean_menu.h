/********************************************************************************
** Form generated from reading UI file 'dean_menu.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEAN_MENU_H
#define UI_DEAN_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dean_menu
{
public:
    QLineEdit *lineEdit_v;
    QLabel *label_nu_De;
    QTextEdit *textEdit_De;
    QLabel *label_v;
    QLineEdit *lineEdit_p;
    QLineEdit *lineEdit_nu_De;
    QLabel *label_D;
    QLabel *label_De;
    QLabel *label_r;
    QLineEdit *lineEdit_D;
    QLabel *label_p;
    QLineEdit *lineEdit_r;
    QPushButton *calculation_Dean;

    void setupUi(QWidget *dean_menu)
    {
        if (dean_menu->objectName().isEmpty())
            dean_menu->setObjectName(QString::fromUtf8("dean_menu"));
        dean_menu->resize(186, 251);
        lineEdit_v = new QLineEdit(dean_menu);
        lineEdit_v->setObjectName(QString::fromUtf8("lineEdit_v"));
        lineEdit_v->setGeometry(QRect(49, 77, 131, 27));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(14);
        lineEdit_v->setFont(font);
        label_nu_De = new QLabel(dean_menu);
        label_nu_De->setObjectName(QString::fromUtf8("label_nu_De"));
        label_nu_De->setGeometry(QRect(11, 110, 32, 21));
        label_nu_De->setFont(font);
        textEdit_De = new QTextEdit(dean_menu);
        textEdit_De->setObjectName(QString::fromUtf8("textEdit_De"));
        textEdit_De->setGeometry(QRect(49, 176, 131, 27));
        textEdit_De->setReadOnly(true);
        label_v = new QLabel(dean_menu);
        label_v->setObjectName(QString::fromUtf8("label_v"));
        label_v->setGeometry(QRect(11, 77, 32, 21));
        label_v->setFont(font);
        lineEdit_p = new QLineEdit(dean_menu);
        lineEdit_p->setObjectName(QString::fromUtf8("lineEdit_p"));
        lineEdit_p->setGeometry(QRect(49, 11, 131, 27));
        lineEdit_p->setFont(font);
        lineEdit_nu_De = new QLineEdit(dean_menu);
        lineEdit_nu_De->setObjectName(QString::fromUtf8("lineEdit_nu_De"));
        lineEdit_nu_De->setGeometry(QRect(49, 110, 131, 27));
        lineEdit_nu_De->setFont(font);
        label_D = new QLabel(dean_menu);
        label_D->setObjectName(QString::fromUtf8("label_D"));
        label_D->setGeometry(QRect(11, 44, 32, 19));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(12);
        label_D->setFont(font1);
        label_De = new QLabel(dean_menu);
        label_De->setObjectName(QString::fromUtf8("label_De"));
        label_De->setGeometry(QRect(11, 176, 32, 19));
        label_De->setFont(font1);
        label_r = new QLabel(dean_menu);
        label_r->setObjectName(QString::fromUtf8("label_r"));
        label_r->setGeometry(QRect(11, 143, 32, 21));
        label_r->setFont(font);
        lineEdit_D = new QLineEdit(dean_menu);
        lineEdit_D->setObjectName(QString::fromUtf8("lineEdit_D"));
        lineEdit_D->setGeometry(QRect(49, 44, 131, 27));
        lineEdit_D->setFont(font);
        label_p = new QLabel(dean_menu);
        label_p->setObjectName(QString::fromUtf8("label_p"));
        label_p->setGeometry(QRect(11, 11, 32, 21));
        label_p->setFont(font);
        lineEdit_r = new QLineEdit(dean_menu);
        lineEdit_r->setObjectName(QString::fromUtf8("lineEdit_r"));
        lineEdit_r->setGeometry(QRect(49, 143, 131, 27));
        lineEdit_r->setFont(font);
        calculation_Dean = new QPushButton(dean_menu);
        calculation_Dean->setObjectName(QString::fromUtf8("calculation_Dean"));
        calculation_Dean->setGeometry(QRect(49, 210, 131, 27));

        retranslateUi(dean_menu);

        QMetaObject::connectSlotsByName(dean_menu);
    } // setupUi

    void retranslateUi(QWidget *dean_menu)
    {
        dean_menu->setWindowTitle(QCoreApplication::translate("dean_menu", "Form", nullptr));
        label_nu_De->setText(QCoreApplication::translate("dean_menu", "\302\265 = ", nullptr));
        label_v->setText(QCoreApplication::translate("dean_menu", "v =", nullptr));
        label_D->setText(QCoreApplication::translate("dean_menu", "D = ", nullptr));
        label_De->setText(QCoreApplication::translate("dean_menu", "De = ", nullptr));
        label_r->setText(QCoreApplication::translate("dean_menu", "r = ", nullptr));
        label_p->setText(QCoreApplication::translate("dean_menu", "p =", nullptr));
        calculation_Dean->setText(QCoreApplication::translate("dean_menu", "\320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214 \320\263\321\200\320\260\321\204\320\270\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dean_menu: public Ui_dean_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEAN_MENU_H
