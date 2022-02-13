/********************************************************************************
** Form generated from reading UI file 'dean_menu_v.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEAN_MENU_V_H
#define UI_DEAN_MENU_V_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dean_menu_v
{
public:
    QLineEdit *lineEdit_v_x1;
    QLabel *label_nu_De;
    QTextEdit *textEdit_De_y1;
    QLabel *label_v;
    QLineEdit *lineEdit_p_x1;
    QLineEdit *lineEdit_nu_De_x1;
    QLabel *label_D;
    QLabel *label_De;
    QLabel *label_r;
    QLineEdit *lineEdit_D_x1;
    QLabel *label_p;
    QLineEdit *lineEdit_r_x1;
    QPushButton *Value_delete;
    QPushButton *add_parametrs_to_the_corresponding_graph_Dean;
    QTextEdit *textEdit_De_y2;
    QLineEdit *lineEdit_v_x2;
    QLabel *label_3;
    QLabel *label_X1;
    QLabel *label_X2;
    QLabel *label_De_2;

    void setupUi(QWidget *dean_menu_v)
    {
        if (dean_menu_v->objectName().isEmpty())
            dean_menu_v->setObjectName(QString::fromUtf8("dean_menu_v"));
        dean_menu_v->resize(186, 390);
        lineEdit_v_x1 = new QLineEdit(dean_menu_v);
        lineEdit_v_x1->setObjectName(QString::fromUtf8("lineEdit_v_x1"));
        lineEdit_v_x1->setGeometry(QRect(49, 104, 51, 27));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        lineEdit_v_x1->setFont(font);
        label_nu_De = new QLabel(dean_menu_v);
        label_nu_De->setObjectName(QString::fromUtf8("label_nu_De"));
        label_nu_De->setGeometry(QRect(11, 137, 32, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(14);
        label_nu_De->setFont(font1);
        textEdit_De_y1 = new QTextEdit(dean_menu_v);
        textEdit_De_y1->setObjectName(QString::fromUtf8("textEdit_De_y1"));
        textEdit_De_y1->setGeometry(QRect(70, 216, 101, 27));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        textEdit_De_y1->setFont(font2);
        textEdit_De_y1->setReadOnly(true);
        label_v = new QLabel(dean_menu_v);
        label_v->setObjectName(QString::fromUtf8("label_v"));
        label_v->setGeometry(QRect(11, 104, 32, 21));
        label_v->setFont(font1);
        lineEdit_p_x1 = new QLineEdit(dean_menu_v);
        lineEdit_p_x1->setObjectName(QString::fromUtf8("lineEdit_p_x1"));
        lineEdit_p_x1->setGeometry(QRect(49, 38, 122, 27));
        lineEdit_p_x1->setFont(font);
        lineEdit_nu_De_x1 = new QLineEdit(dean_menu_v);
        lineEdit_nu_De_x1->setObjectName(QString::fromUtf8("lineEdit_nu_De_x1"));
        lineEdit_nu_De_x1->setGeometry(QRect(49, 137, 122, 27));
        lineEdit_nu_De_x1->setFont(font);
        label_D = new QLabel(dean_menu_v);
        label_D->setObjectName(QString::fromUtf8("label_D"));
        label_D->setGeometry(QRect(11, 71, 32, 19));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Times New Roman"));
        font3.setPointSize(12);
        label_D->setFont(font3);
        label_De = new QLabel(dean_menu_v);
        label_De->setObjectName(QString::fromUtf8("label_De"));
        label_De->setGeometry(QRect(11, 220, 61, 19));
        label_De->setFont(font3);
        label_r = new QLabel(dean_menu_v);
        label_r->setObjectName(QString::fromUtf8("label_r"));
        label_r->setGeometry(QRect(11, 170, 32, 21));
        label_r->setFont(font1);
        lineEdit_D_x1 = new QLineEdit(dean_menu_v);
        lineEdit_D_x1->setObjectName(QString::fromUtf8("lineEdit_D_x1"));
        lineEdit_D_x1->setGeometry(QRect(49, 71, 122, 27));
        lineEdit_D_x1->setFont(font);
        label_p = new QLabel(dean_menu_v);
        label_p->setObjectName(QString::fromUtf8("label_p"));
        label_p->setGeometry(QRect(11, 38, 32, 21));
        label_p->setFont(font1);
        lineEdit_r_x1 = new QLineEdit(dean_menu_v);
        lineEdit_r_x1->setObjectName(QString::fromUtf8("lineEdit_r_x1"));
        lineEdit_r_x1->setGeometry(QRect(49, 170, 122, 27));
        lineEdit_r_x1->setFont(font);
        Value_delete = new QPushButton(dean_menu_v);
        Value_delete->setObjectName(QString::fromUtf8("Value_delete"));
        Value_delete->setGeometry(QRect(9, 360, 171, 23));
        QFont font4;
        font4.setPointSize(9);
        Value_delete->setFont(font4);
        add_parametrs_to_the_corresponding_graph_Dean = new QPushButton(dean_menu_v);
        add_parametrs_to_the_corresponding_graph_Dean->setObjectName(QString::fromUtf8("add_parametrs_to_the_corresponding_graph_Dean"));
        add_parametrs_to_the_corresponding_graph_Dean->setGeometry(QRect(9, 300, 171, 51));
        add_parametrs_to_the_corresponding_graph_Dean->setFont(font4);
        textEdit_De_y2 = new QTextEdit(dean_menu_v);
        textEdit_De_y2->setObjectName(QString::fromUtf8("textEdit_De_y2"));
        textEdit_De_y2->setGeometry(QRect(70, 256, 101, 27));
        textEdit_De_y2->setFont(font2);
        textEdit_De_y2->setReadOnly(true);
        lineEdit_v_x2 = new QLineEdit(dean_menu_v);
        lineEdit_v_x2->setObjectName(QString::fromUtf8("lineEdit_v_x2"));
        lineEdit_v_x2->setGeometry(QRect(120, 104, 51, 27));
        lineEdit_v_x2->setFont(font);
        label_3 = new QLabel(dean_menu_v);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(106, 104, 16, 27));
        QFont font5;
        font5.setPointSize(14);
        label_3->setFont(font5);
        label_X1 = new QLabel(dean_menu_v);
        label_X1->setObjectName(QString::fromUtf8("label_X1"));
        label_X1->setGeometry(QRect(61, 10, 31, 20));
        label_X1->setFont(font5);
        label_X2 = new QLabel(dean_menu_v);
        label_X2->setObjectName(QString::fromUtf8("label_X2"));
        label_X2->setGeometry(QRect(132, 10, 31, 20));
        label_X2->setFont(font5);
        label_De_2 = new QLabel(dean_menu_v);
        label_De_2->setObjectName(QString::fromUtf8("label_De_2"));
        label_De_2->setGeometry(QRect(11, 260, 61, 19));
        label_De_2->setFont(font3);

        retranslateUi(dean_menu_v);

        QMetaObject::connectSlotsByName(dean_menu_v);
    } // setupUi

    void retranslateUi(QWidget *dean_menu_v)
    {
        dean_menu_v->setWindowTitle(QCoreApplication::translate("dean_menu_v", "Form", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_v_x1->setToolTip(QCoreApplication::translate("dean_menu_v", "<html><head/><body><p>\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\207\320\270\321\201\320\273\320\276 \320\276\321\202 1000,00 \320\264\320\276 5000,00</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_nu_De->setText(QCoreApplication::translate("dean_menu_v", "\302\265 = ", nullptr));
        label_v->setText(QCoreApplication::translate("dean_menu_v", "v =", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_p_x1->setToolTip(QCoreApplication::translate("dean_menu_v", "<html><head/><body><p>\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\207\320\270\321\201\320\273\320\276 \320\276\321\202 1000,00 \320\264\320\276 5000,00</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lineEdit_nu_De_x1->setToolTip(QCoreApplication::translate("dean_menu_v", "<html><head/><body><p>\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\207\320\270\321\201\320\273\320\276 \320\276\321\202 1000,00 \320\264\320\276 5000,00</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_D->setText(QCoreApplication::translate("dean_menu_v", "D = ", nullptr));
        label_De->setText(QCoreApplication::translate("dean_menu_v", "De Y1 = ", nullptr));
        label_r->setText(QCoreApplication::translate("dean_menu_v", "r = ", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_D_x1->setToolTip(QCoreApplication::translate("dean_menu_v", "<html><head/><body><p>\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\207\320\270\321\201\320\273\320\276 \320\276\321\202 1000,00 \320\264\320\276 5000,00</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_p->setText(QCoreApplication::translate("dean_menu_v", "p =", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_r_x1->setToolTip(QCoreApplication::translate("dean_menu_v", "<html><head/><body><p>\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\207\320\270\321\201\320\273\320\276 \320\276\321\202 1000,00 \320\264\320\276 5000,00</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        Value_delete->setText(QCoreApplication::translate("dean_menu_v", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217", nullptr));
        add_parametrs_to_the_corresponding_graph_Dean->setText(QCoreApplication::translate("dean_menu_v", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\262 \n"
" \321\201\320\276\320\276\321\202\320\262\320\265\321\202\321\201\321\202\320\262\321\203\321\216\321\211\320\270\320\271 \n"
"  \320\263\321\200\320\260\321\204\320\270\320\272", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_v_x2->setToolTip(QCoreApplication::translate("dean_menu_v", "<html><head/><body><p>\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\207\320\270\321\201\320\273\320\276 \320\276\321\202 1000,00 \320\264\320\276 5000,00</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("dean_menu_v", "-", nullptr));
        label_X1->setText(QCoreApplication::translate("dean_menu_v", "X1", nullptr));
        label_X2->setText(QCoreApplication::translate("dean_menu_v", "X2", nullptr));
        label_De_2->setText(QCoreApplication::translate("dean_menu_v", "De Y2 = ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dean_menu_v: public Ui_dean_menu_v {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEAN_MENU_V_H
