#include "draw_de_d.h"
#include "ui_draw_de_d.h"

Draw_De_D::Draw_De_D(QWidget *parent) :
    diagram_window(parent),
    ui(new Ui::Draw_De_D)
{
    ui->setupUi(this);

    diagram_name = ui->De_D_graph;

    diagram_name->yAxis->setLabel("De");
    diagram_name->xAxis->setLabel("D");
}

Draw_De_D::~Draw_De_D()
{
    delete ui;
}
