#include "draw_l_h.h"
#include "ui_draw_l_h.h"

Draw_L_h::Draw_L_h(QWidget *parent) :
    diagram_window(parent),
    ui(new Ui::Draw_L_h)
{
    ui->setupUi(this);

    diagram_name = ui->L_h_graph;

    diagram_name->yAxis->setLabel("L");
    diagram_name->xAxis->setLabel("h");
}

Draw_L_h::~Draw_L_h()
{
    delete ui;
}
