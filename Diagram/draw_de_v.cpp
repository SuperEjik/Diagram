#include "draw_de_v.h"
#include "ui_draw_de_v.h"

Draw_De_v::Draw_De_v(QWidget *parent) :
    diagram_window(parent),
    ui(new Ui::Draw_De_v)
{
    ui->setupUi(this);

    diagram_name = ui->De_v_graph;

    diagram_name->yAxis->setLabel("De");
    diagram_name->xAxis->setLabel("v");
}

Draw_De_v::~Draw_De_v()
{
    delete ui;
}
