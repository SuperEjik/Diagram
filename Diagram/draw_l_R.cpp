#include "draw_l_R.h"
#include "ui_draw_l_R.h"

Draw_L_R::Draw_L_R(QWidget *parent) :
    diagram_window(parent),
    ui(new Ui::Draw_L_R)
{
    ui->setupUi(this);

    diagram_name = ui->L_R_graph;

    diagram_name->yAxis->setLabel("L");
    diagram_name->xAxis->setLabel("R");
}

Draw_L_R::~Draw_L_R()
{
    delete ui;
}
