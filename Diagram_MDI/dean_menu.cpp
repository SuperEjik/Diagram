#include "dean_menu.h"
#include "ui_dean_menu.h"
#include "mainwindow.h"

#include <qvalidator.h>

dean_menu::dean_menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dean_menu)
{
    ui->setupUi(this);
    value_enter();

    /*D1 = 0;
    nu1 = 0;
    p1 = 0;
    r1 = 0;
    v1 = 0;

    D2 = 0;
    nu2 = 0;
    p2 = 0;
    r2 = 0;
    v2 = 0;

    number_y1 = 0;
    number_y2 = 0;

    ui->lineEdit_p_x1->setValidator(new QRegExpValidator(QRegExp("((5[0][0][0])||([1-4][0-9]{3}(,)[0-9]{10}))"), this));
    ui->lineEdit_D_x1->setValidator(new QRegExpValidator(QRegExp("((5[0][0][0])||([1-4][0-9]{3}(,)[0-9]{10}))"), this));
    ui->lineEdit_v_x1->setValidator(new QRegExpValidator(QRegExp("((5[0][0][0])||([1-4][0-9]{3}(,)[0-9]{10}))"), this));
    ui->lineEdit_nu_De_x1->setValidator(new QRegExpValidator(QRegExp("((5[0][0][0])||([1-4][0-9]{3}(,)[0-9]{10}))"), this));
    ui->lineEdit_r_x1->setValidator(new QRegExpValidator(QRegExp("((5[0][0][0])||([1-4][0-9]{3}(,)[0-9]{10}))"), this));

    ui->lineEdit_p_x2->setValidator(new QRegExpValidator(QRegExp("((5[0][0][0])||([1-4][0-9]{3}(,)[0-9]{10}))"), this));
    ui->lineEdit_D_x2->setValidator(new QRegExpValidator(QRegExp("((5[0][0][0])||([1-4][0-9]{3}(,)[0-9]{10}))"), this));
    ui->lineEdit_v_x2->setValidator(new QRegExpValidator(QRegExp("((5[0][0][0])||([1-4][0-9]{3}(,)[0-9]{10}))"), this));
    ui->lineEdit_nu_De_x2->setValidator(new QRegExpValidator(QRegExp("((5[0][0][0])||([1-4][0-9]{3}(,)[0-9]{10}))"), this));
    ui->lineEdit_r_x2->setValidator(new QRegExpValidator(QRegExp("((5[0][0][0])||([1-4][0-9]{3}(,)[0-9]{10}))"), this));*/
}

dean_menu::~dean_menu()
{
    delete ui;
}

void dean_menu::value_enter()
{
    D1 = 0;
        nu1 = 0;
        p1 = 0;
        r1 = 0;
        v1 = 0;

        D2 = 0;
        nu2 = 0;
        p2 = 0;
        r2 = 0;
        v2 = 0;

        number_y1 = 0;
        number_y2 = 0;

        ui->lineEdit_p_x1->setValidator(new QRegExpValidator(QRegExp("((5[0][0][0])||([1-4][0-9]{3}(,)[0-9]{10}))"), this));
        ui->lineEdit_D_x1->setValidator(new QRegExpValidator(QRegExp("((5[0][0][0])||([1-4][0-9]{3}(,)[0-9]{10}))"), this));
        ui->lineEdit_v_x1->setValidator(new QRegExpValidator(QRegExp("((5[0][0][0])||([1-4][0-9]{3}(,)[0-9]{10}))"), this));
        ui->lineEdit_nu_De_x1->setValidator(new QRegExpValidator(QRegExp("((5[0][0][0])||([1-4][0-9]{3}(,)[0-9]{10}))"), this));
        ui->lineEdit_r_x1->setValidator(new QRegExpValidator(QRegExp("((5[0][0][0])||([1-4][0-9]{3}(,)[0-9]{10}))"), this));

        ui->lineEdit_p_x2->setValidator(new QRegExpValidator(QRegExp("((5[0][0][0])||([1-4][0-9]{3}(,)[0-9]{10}))"), this));
        ui->lineEdit_D_x2->setValidator(new QRegExpValidator(QRegExp("((5[0][0][0])||([1-4][0-9]{3}(,)[0-9]{10}))"), this));
        ui->lineEdit_v_x2->setValidator(new QRegExpValidator(QRegExp("((5[0][0][0])||([1-4][0-9]{3}(,)[0-9]{10}))"), this));
        ui->lineEdit_nu_De_x2->setValidator(new QRegExpValidator(QRegExp("((5[0][0][0])||([1-4][0-9]{3}(,)[0-9]{10}))"), this));
        ui->lineEdit_r_x2->setValidator(new QRegExpValidator(QRegExp("((5[0][0][0])||([1-4][0-9]{3}(,)[0-9]{10}))"), this));
}

void dean_menu::value_calculate()
{
    ui->textEdit_De_y1->clear();
    ui->textEdit_De_y2->clear();

    if(ui->lineEdit_p_x1->text().toDouble() < 1000)
    {
        ui->lineEdit_p_x1->setText(QString::number(1000));
    }
    if(ui->lineEdit_p_x2->text().toDouble() < 1000)
    {
        ui->lineEdit_p_x2->setText(QString::number(1000));
    }

    if(ui->lineEdit_D_x1->text().toDouble() < 1000)
    {
        ui->lineEdit_D_x1->setText(QString::number(1000));
    }
    if(ui->lineEdit_D_x2->text().toDouble() < 1000)
    {
        ui->lineEdit_D_x2->setText(QString::number(1000));
    }

    if(ui->lineEdit_v_x1->text().toDouble() < 1000)
    {
        ui->lineEdit_v_x1->setText(QString::number(1000));
    }
    if(ui->lineEdit_v_x2->text().toDouble() < 1000)
    {
        ui->lineEdit_v_x2->setText(QString::number(1000));
    }

    if(ui->lineEdit_nu_De_x1->text().toDouble() < 1000)
    {
        ui->lineEdit_nu_De_x1->setText(QString::number(1000));
    }
    if(ui->lineEdit_nu_De_x2->text().toDouble() < 1000)
    {
        ui->lineEdit_nu_De_x2->setText(QString::number(1000));
    }

    if(ui->lineEdit_r_x1->text().toDouble() < 1000)
    {
        ui->lineEdit_r_x1->setText(QString::number(1000));
    }
    if(ui->lineEdit_r_x2->text().toDouble() < 1000)
    {
        ui->lineEdit_r_x2->setText(QString::number(1000));
    }

    number_y1 = c.definition_Dn( (ui->lineEdit_p_x1->text().replace(",", ".")).toDouble(), (ui->lineEdit_D_x1->text().replace(",", ".")).toDouble(),
                                (ui->lineEdit_v_x1->text().replace(",", ".")).toDouble(), (ui->lineEdit_nu_De_x1->text().replace(",", ".")).toDouble(),
                                (ui->lineEdit_r_x1->text().replace(",", ".")).toDouble() );

    number_y2 = c.definition_Dn( (ui->lineEdit_p_x2->text().replace(",", ".")).toDouble(), (ui->lineEdit_D_x2->text().replace(",", ".")).toDouble(),
                                (ui->lineEdit_v_x2->text().replace(",", ".")).toDouble(), (ui->lineEdit_nu_De_x2->text().replace(",", ".")).toDouble(),
                                (ui->lineEdit_r_x2->text().replace(",", ".")).toDouble() );

    ui->textEdit_De_y1->insertPlainText(QString::number(number_y1));
    ui->textEdit_De_y2->insertPlainText(QString::number(number_y2));
}

void dean_menu::new_values()
{
    p1 = (ui->lineEdit_p_x1->text().replace(",", ".")).toDouble();
    D1 = (ui->lineEdit_D_x1->text().replace(",", ".")).toDouble();
    v1 = (ui->lineEdit_v_x1->text().replace(",", ".")).toDouble();
    nu1 = (ui->lineEdit_nu_De_x1->text().replace(",", ".")).toDouble();
    r1 = (ui->lineEdit_r_x1->text().replace(",", ".")).toDouble();

    p2 = (ui->lineEdit_p_x2->text().replace(",", ".")).toDouble();
    D2 = (ui->lineEdit_D_x2->text().replace(",", ".")).toDouble();
    v2 = (ui->lineEdit_v_x2->text().replace(",", ".")).toDouble();
    nu2 = (ui->lineEdit_nu_De_x2->text().replace(",", ".")).toDouble();
    r2 = (ui->lineEdit_r_x2->text().replace(",", ".")).toDouble();
}

void dean_menu::on_add_parametrs_to_the_corresponding_graph_Dean_clicked() // исправить алгоритм счёта
{
    if( ((ui->lineEdit_p_x1->text().replace(",", ".")).toDouble() != p1) || ((ui->lineEdit_p_x2->text().replace(",", ".")).toDouble() != p2) )
    {
        value_calculate();

        emit signal_De_p(number_y1, (ui->lineEdit_p_x1->text().replace(",", ".")).toDouble(), number_y2, (ui->lineEdit_p_x2->text().replace(",", ".")).toDouble());
    }

    if( ((ui->lineEdit_D_x1->text().replace(",", ".")).toDouble() != D1) || ((ui->lineEdit_D_x2->text().replace(",", ".")).toDouble() != D2) )
    {
        value_calculate();

        emit signal_De_D(number_y1, (ui->lineEdit_D_x1->text().replace(",", ".")).toDouble(), number_y2, (ui->lineEdit_D_x2->text().replace(",", ".")).toDouble());
    }

    if( ((ui->lineEdit_v_x1->text().replace(",", ".")).toDouble() != v1) || ((ui->lineEdit_v_x2->text().replace(",", ".")).toDouble() != v2) )
    {
        value_calculate();

        emit signal_De_v(number_y1, (ui->lineEdit_v_x1->text().replace(",", ".")).toDouble(), number_y2, (ui->lineEdit_v_x2->text().replace(",", ".")).toDouble());
    }

    if( ((ui->lineEdit_nu_De_x1->text().replace(",", ".")).toDouble() != nu1) || ((ui->lineEdit_nu_De_x2->text().replace(",", ".")).toDouble() != nu2) )
    {
        value_calculate();

        emit signal_De_nu(number_y1, (ui->lineEdit_nu_De_x1->text().replace(",", ".")).toDouble(), number_y2, (ui->lineEdit_nu_De_x2->text().replace(",", ".")).toDouble());
    }

    if( ((ui->lineEdit_r_x1->text().replace(",", ".")).toDouble() != r1) || ((ui->lineEdit_r_x2->text().replace(",", ".")).toDouble() != r2))
    {
        value_calculate();

        emit signal_De_r(number_y1, (ui->lineEdit_r_x1->text().replace(",", ".")).toDouble(), number_y2, (ui->lineEdit_r_x2->text().replace(",", ".")).toDouble());
    }

    new_values();
}


void dean_menu::on_Value_delete_clicked()
{
    ui->lineEdit_p_x1->clear();
    ui->lineEdit_D_x1->clear();
    ui->lineEdit_v_x1->clear();
    ui->lineEdit_nu_De_x1->clear();
    ui->lineEdit_r_x1->clear();
    ui->textEdit_De_y1->clear();

    ui->lineEdit_p_x2->clear();
    ui->lineEdit_D_x2->clear();
    ui->lineEdit_v_x2->clear();
    ui->lineEdit_nu_De_x2->clear();
    ui->lineEdit_r_x2->clear();
    ui->textEdit_De_y2->clear();
}

void dean_menu::on_add_parametrs_to_all_graphs_Dean_clicked()
{
    value_calculate();

    emit signal_De_D(number_y1, D1, number_y2, D2);
    emit signal_De_nu(number_y1, nu1, number_y2, nu2);
    emit signal_De_p(number_y1, p1, number_y2, p2);
    emit signal_De_r(number_y1, r1, number_y2, r2);
    emit signal_De_v(number_y1, v1, number_y2, v2);
}

