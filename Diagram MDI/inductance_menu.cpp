#include "inductance_menu.h"
#include "ui_inductance_menu.h"
#include "calculation.h"
#include "mainwindow.h"

inductance_menu::inductance_menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::inductance_menu)
{
    ui->setupUi(this);
    N = 0;
    nu = 0;
    R = 0;
    r = 0;
    h = 0;
    number_y = 0;
}

inductance_menu::~inductance_menu()
{
    delete ui;
}

void inductance_menu::on_calculation_inductance_clicked()
{
    ui->textEdit_L->clear();

    N = ui->lineEdit_N->text().toDouble();
    nu = ui->lineEdit_nu->text().toDouble();
    R = ui->lineEdit_R->text().toDouble();
    r = ui->lineEdit_r->text().toDouble();
    h = ui->lineEdit_h->text().toDouble();

    Calculation c;
    number_y = c.Inductance(N, nu, R, r, h);
    ui->textEdit_L->insertPlainText(QString::number(number_y));

    emit signal_L_N(number_y, N, number_y, N);
    emit signal_L_nu(number_y, nu, number_y, nu);
    emit signal_L_R(number_y, R, number_y, R);
    emit signal_L_r(number_y, r, number_y, r);
    emit signal_L_h(number_y, h, number_y, h);
}

