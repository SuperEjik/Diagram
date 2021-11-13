#include "draw_l_inner_r.h"
#include "ui_draw_l_inner_r.h"

Draw_L_Inner_r::Draw_L_Inner_r(QWidget *parent) :
    diagram_window(parent),
    ui(new Ui::Draw_L_Inner_r)
{
    ui->setupUi(this);

    diagram_name = ui->L_r_graph;

    diagram_name->yAxis->setLabel("L");
    diagram_name->xAxis->setLabel("r");
}

Draw_L_Inner_r::~Draw_L_Inner_r()
{
    delete ui;
}

