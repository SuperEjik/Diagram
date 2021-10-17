#include "dean_menu.h"
#include "ui_dean_menu.h"
#include "calculation.h"
#include "mainwindow.h"

dean_menu::dean_menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dean_menu)
{
    ui->setupUi(this);
    D = 0;
    nu = 0;
    p = 0;
    r = 0;
    v = 0;
    number_y = 0;
}

dean_menu::~dean_menu()
{
    delete ui;
}

void dean_menu::on_calculation_Dean_clicked()
{
    ui->textEdit_De->clear();

    p = ui->lineEdit_p->text().toDouble();
    D = ui->lineEdit_D->text().toDouble();
    v = ui->lineEdit_v->text().toDouble();
    nu = ui->lineEdit_nu_De->text().toDouble();
    r = ui->lineEdit_r->text().toDouble();


    Calculation c;
    number_y = c.definition_Dn(p, D, v, nu, r);
    ui->textEdit_De->insertPlainText(QString::number(number_y));

    emit signal_De_D(number_y, D);
    emit signal_De_nu(number_y, nu);
    emit signal_De_p(number_y, p);
    emit signal_De_r(number_y, r);
    emit signal_De_v(number_y, v);
}

