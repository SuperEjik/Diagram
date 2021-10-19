#include "draw_de_r.h"
#include "ui_draw_de_r.h"

Draw_De_r::Draw_De_r(QWidget *parent) :
    diagram_window(parent),
    ui(new Ui::Draw_De_r)
{
    ui->setupUi(this);

    diagram_name = ui->De_r_graph;

    diagram_name->yAxis->setLabel("De");
    diagram_name->xAxis->setLabel("r");
}

Draw_De_r::~Draw_De_r()
{
    delete ui;
}
