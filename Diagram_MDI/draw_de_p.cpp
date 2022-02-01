#include "draw_de_p.h"
#include "ui_draw_de_p.h"

Draw_De_p::Draw_De_p(QWidget *parent) :
    diagram_window(parent),
    ui(new Ui::Draw_De_p)
{
    ui->setupUi(this);

    diagram_name = ui->De_p_graph;

    //минимальный и максимальный промежуток
    diagram_name->xAxis->setRange(min_x, max_x);
    diagram_name->yAxis->setRange(min_y, max_y);

    textLabel_Y = new QCPItemText(diagram_name);
    textLabel_Y->setPositionAlignment(Qt::AlignLeft | Qt::AlignLeft);//AlignHCenter
    textLabel_Y->position->setType(QCPItemPosition::ptAxisRectRatio);
    textLabel_Y->position->setCoords(0, 0); // place position at left/top of axis rect
    textLabel_Y->setText("\t De");
    textLabel_Y->setFont(QFont(font().family(), 16)); // make font a bit larger

    textLabel_X = new QCPItemText(diagram_name);
    textLabel_X->setPositionAlignment(Qt::AlignRight | Qt::AlignBottom);//AlignHCenterQt::AlignRight
    textLabel_X->position->setType(QCPItemPosition::ptAxisRectRatio);
    textLabel_X->position->setCoords(1, 1); // place position at left/top of axis rect
    textLabel_X->setText("ρ, кг/м3 \n");
    textLabel_X->setFont(QFont(font().family(), 16)); // make font a bit larger
}

Draw_De_p::~Draw_De_p()
{
    delete ui;
}
