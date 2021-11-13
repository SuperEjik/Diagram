#ifndef DRAW_L_INNER_R_H
#define DRAW_L_INNER_R_H

#include <QWidget>
#include "diagram_window.h"

namespace Ui {
class Draw_L_Inner_r;
}

class Draw_L_Inner_r : public diagram_window
{
    Q_OBJECT

public:
    explicit Draw_L_Inner_r(QWidget *parent = nullptr);
    ~Draw_L_Inner_r();

private:
    Ui::Draw_L_Inner_r *ui;
};

#endif // DRAW_L_INNER_R_H
