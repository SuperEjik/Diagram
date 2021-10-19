#include "draw_de_nu.h"
#include "ui_draw_de_nu.h"

Draw_De_nu::Draw_De_nu(QWidget *parent) :
    diagram_window(parent),
    ui(new Ui::Draw_De_nu)
{
    ui->setupUi(this);

    diagram_name = ui->De_nu_graph;

    diagram_name->yAxis->setLabel("De");
    diagram_name->xAxis->setLabel("u");
}

Draw_De_nu::~Draw_De_nu()
{
    delete ui;
}
