#ifndef DRAW_L_N_H
#define DRAW_L_N_H

#include <QWidget>
#include "diagram_window.h"

namespace Ui {
class Draw_L_N;
}

class Draw_L_N : public diagram_window
{
    Q_OBJECT

public:
    explicit Draw_L_N(QWidget *parent = nullptr);
    ~Draw_L_N();

    void draw_graph(double, double);

    double start_x, start_y;
    bool first;

private:
    Ui::Draw_L_N *ui;
};

#endif // DRAW_L_N_H
