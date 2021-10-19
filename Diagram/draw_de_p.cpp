#include "draw_de_p.h"
#include "ui_draw_de_p.h"

Draw_De_p::Draw_De_p(QWidget *parent) :
    diagram_window(parent),
    ui(new Ui::Draw_De_p)
{
    ui->setupUi(this);

    diagram_name = ui->De_p_graph;

    diagram_name->yAxis->setLabel("De");
    diagram_name->xAxis->setLabel("p");
}

Draw_De_p::~Draw_De_p()
{
    delete ui;
}
