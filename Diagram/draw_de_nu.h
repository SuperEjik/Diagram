#ifndef DRAW_DE_NU_H
#define DRAW_DE_NU_H

#include <QWidget>
#include "diagram_window.h"

namespace Ui {
class Draw_De_nu;
}

class Draw_De_nu : public diagram_window
{
    Q_OBJECT

public:
    explicit Draw_De_nu(QWidget *parent = nullptr);
    ~Draw_De_nu();

private:
    Ui::Draw_De_nu *ui;
};

#endif // DRAW_DE_NU_H
