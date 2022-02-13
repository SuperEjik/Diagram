#ifndef DEAN_MENU_V_H
#define DEAN_MENU_V_H

#include <QWidget>
#include "dean_menu.h"

namespace Ui {
class dean_menu_v;
}

class dean_menu_v : public dean_menu
{
    Q_OBJECT

public:
    explicit dean_menu_v(QWidget *parent = nullptr);
    ~dean_menu_v();

private:
    Ui::dean_menu_v *ui;
};

#endif // DEAN_MENU_V_H
