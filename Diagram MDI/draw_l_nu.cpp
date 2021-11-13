#include "draw_l_nu.h"
#include "ui_draw_l_nu.h"

Draw_L_nu::Draw_L_nu(QWidget *parent) :
    diagram_window(parent),
    ui(new Ui::Draw_L_nu)
{
    ui->setupUi(this);

    diagram_name = ui->L_nu_graph;

    diagram_name->yAxis->setLabel("L");
    diagram_name->xAxis->setLabel("μ");
}

Draw_L_nu::~Draw_L_nu()
{
    delete ui;
}
