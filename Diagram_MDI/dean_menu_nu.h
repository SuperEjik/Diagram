#ifndef DEAN_MENU_NU_H
#define DEAN_MENU_NU_H

#include <QWidget>
#include "dean_menu.h"

namespace Ui {
class dean_menu_nu;
}

class dean_menu_nu : public dean_menu
{
    Q_OBJECT

public:
    explicit dean_menu_nu(QWidget *parent = nullptr);
    ~dean_menu_nu();

private:
    Ui::dean_menu_nu *ui;
};

#endif // DEAN_MENU_NU_H
