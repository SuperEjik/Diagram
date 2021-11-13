#include "draw_l_n.h"
#include "ui_draw_l_n.h"

Draw_L_N::Draw_L_N(QWidget *parent) :
    diagram_window(parent),
    ui(new Ui::Draw_L_N)
{
    ui->setupUi(this);

    diagram_name = ui->L_N_graph;

    diagram_name->yAxis->setLabel("L");
    diagram_name->xAxis->setLabel("N");
}

Draw_L_N::~Draw_L_N()
{
    delete ui;
}
