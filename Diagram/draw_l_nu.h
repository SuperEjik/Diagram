#ifndef DRAW_L_NU_H
#define DRAW_L_NU_H

#include <QWidget>
#include "diagram_window.h"

namespace Ui {
class Draw_L_nu;
}

class Draw_L_nu : public diagram_window
{
    Q_OBJECT

public:
    explicit Draw_L_nu(QWidget *parent = nullptr);
    ~Draw_L_nu();

private:
    Ui::Draw_L_nu *ui;
};

#endif // DRAW_L_NU_H
