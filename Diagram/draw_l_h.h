#ifndef DRAW_L_H_H
#define DRAW_L_H_H

#include <QWidget>
#include "diagram_window.h"

namespace Ui {
class Draw_L_h;
}

class Draw_L_h : public diagram_window
{
    Q_OBJECT

public:
    explicit Draw_L_h(QWidget *parent = nullptr);
    ~Draw_L_h();

private:
    Ui::Draw_L_h *ui;
};

#endif // DRAW_L_H_H
