#include "dean_menu.h"
#include "ui_dean_menu.h"
#include "mainwindow.h"

#include <qvalidator.h>

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

    ui->lineEdit_p->setValidator(new QRegExpValidator(QRegExp("^([-1-9][0-9]*|0)(\\,)[0-9]{10}"), this));
    ui->lineEdit_D->setValidator(new QRegExpValidator(QRegExp("^([-1-9][0-9]*|0)(\\,)[0-9]{10}"), this));
    ui->lineEdit_v->setValidator(new QRegExpValidator(QRegExp("^([-1-9][0-9]*|0)(\\,)[0-9]{10}"), this));
    ui->lineEdit_nu_De->setValidator(new QRegExpValidator(QRegExp("^([-1-9][0-9]*|0)(\\,)[0-9]{10}"), this));
    ui->lineEdit_r->setValidator(new QRegExpValidator(QRegExp("^([-1-9][0-9]*|0)(\\,)[0-9]{10}"), this));
}

dean_menu::~dean_menu()
{
    delete ui;
}

void dean_menu::value_calculate()
{
    ui->textEdit_De->clear();

    number_y = c.definition_Dn((ui->lineEdit_p->text().replace(",", ".")).toDouble(), (ui->lineEdit_D->text().replace(",", ".")).toDouble(),
                               (ui->lineEdit_v->text().replace(",", ".")).toDouble(), (ui->lineEdit_nu_De->text().replace(",", ".")).toDouble(),
                               (ui->lineEdit_r->text().replace(",", ".")).toDouble());

    ui->textEdit_De->insertPlainText(QString::number(number_y));
}

void dean_menu::new_values()
{
    p = (ui->lineEdit_p->text().replace(",", ".")).toDouble();
    D = (ui->lineEdit_D->text().replace(",", ".")).toDouble();
    v = (ui->lineEdit_v->text().replace(",", ".")).toDouble();
    nu = (ui->lineEdit_nu_De->text().replace(",", ".")).toDouble();
    r = (ui->lineEdit_r->text().replace(",", ".")).toDouble();
}

void dean_menu::on_add_parametrs_to_the_corresponding_graph_Dean_clicked() // исправить алгоритм счёта
{
    if((ui->lineEdit_p->text().replace(",", ".")).toDouble() != p)
    {
        value_calculate();

        emit signal_De_p(number_y, (ui->lineEdit_p->text().replace(",", ".")).toDouble());
    }

    if((ui->lineEdit_D->text().replace(",", ".")).toDouble() != D)
    {
        value_calculate();

        emit signal_De_D(number_y, (ui->lineEdit_D->text().replace(",", ".")).toDouble());
    }

    if((ui->lineEdit_v->text().replace(",", ".")).toDouble() != v)
    {
        value_calculate();

        emit signal_De_v(number_y, (ui->lineEdit_v->text().replace(",", ".")).toDouble());
    }

    if((ui->lineEdit_nu_De->text().replace(",", ".")).toDouble() != nu)
    {
        value_calculate();

        emit signal_De_nu(number_y, (ui->lineEdit_nu_De->text().replace(",", ".")).toDouble());
    }

    if((ui->lineEdit_r->text().replace(",", ".")).toDouble() != r)
    {
        value_calculate();

        emit signal_De_r(number_y, (ui->lineEdit_r->text().replace(",", ".")).toDouble());
    }

    new_values();
}


void dean_menu::on_Value_delete_clicked()
{
    ui->lineEdit_p->clear();
    ui->lineEdit_D->clear();
    ui->lineEdit_v->clear();
    ui->lineEdit_nu_De->clear();
    ui->lineEdit_r->clear();
    ui->textEdit_De->clear();
}

void dean_menu::on_add_parametrs_to_all_graphs_Dean_clicked()
{
    value_calculate();

    emit signal_De_D(number_y, D);
    emit signal_De_nu(number_y, nu);
    emit signal_De_p(number_y, p);
    emit signal_De_r(number_y, r);
    emit signal_De_v(number_y, v);
}

