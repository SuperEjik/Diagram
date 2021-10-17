#ifndef DRAW_L_R_H
#define DRAW_L_R_H

#include <QWidget>
#include "diagram_window.h"

namespace Ui {
class Draw_L_R;
}

class Draw_L_R : public diagram_window
{
    Q_OBJECT

public:
    explicit Draw_L_R(QWidget *parent = nullptr);
    ~Draw_L_R();

    void draw_graph(double, double);

private:
    Ui::Draw_L_R *ui;
};

#endif // DRAW_L_R_H
