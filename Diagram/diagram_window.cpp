#include "diagram_window.h"
#include "ui_diagram_window.h"

diagram_window::diagram_window(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::diagram_window)
{
    //ui->setupUi(this);
}

diagram_window::~diagram_window()
{
    delete ui;
}

void diagram_window::draw_graph(double , double )
{
}

