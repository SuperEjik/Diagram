#ifndef DEAN_MENU_R_H
#define DEAN_MENU_R_H

#include <QWidget>
#include "dean_menu.h"

namespace Ui {
class dean_menu_r;
}

class dean_menu_r : public dean_menu
{
    Q_OBJECT

public:
    explicit dean_menu_r(QWidget *parent = nullptr);
    ~dean_menu_r();

private:
    Ui::dean_menu_r *ui;
};

#endif // DEAN_MENU_R_H
