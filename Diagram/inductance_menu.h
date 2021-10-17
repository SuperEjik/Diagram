#ifndef INDUCTANCE_MENU_H
#define INDUCTANCE_MENU_H

#include <QWidget>

namespace Ui {
class inductance_menu;
}

class inductance_menu : public QWidget
{
    Q_OBJECT

public:
    explicit inductance_menu(QWidget *parent = nullptr);
    ~inductance_menu();

public slots:
    void on_calculation_inductance_clicked();

public:
    Ui::inductance_menu *ui;
    double N, nu, R, r, h, number_y;

signals:
    void signal_L_N(double, double);
    void signal_L_nu(double, double);
    void signal_L_R(double, double);
    void signal_L_r(double, double);
    void signal_L_h(double, double);
};

#endif // INDUCTANCE_MENU_H
