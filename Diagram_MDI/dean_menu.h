#ifndef DEAN_MENU_H
#define DEAN_MENU_H

#include <QWidget>
#include "calculation.h"

namespace Ui {
class dean_menu;
}

class dean_menu : public QWidget
{
    Q_OBJECT

public:
    explicit dean_menu(QWidget *parent = nullptr);
    ~dean_menu();

public:
    Ui::dean_menu *ui;
    double D1, nu1, p1, r1, v1, D2, nu2, p2, r2, v2, number_y1, number_y2;
    Calculation c;
    void value_calculate();
    void new_values();


signals:
    void signal_De_D(double, double, double, double);
    void signal_De_nu(double, double, double, double);
    void signal_De_p(double, double, double, double);
    void signal_De_r(double, double, double, double);
    void signal_De_v(double, double, double, double);
private slots:
    void on_Value_delete_clicked();
    void on_add_parametrs_to_the_corresponding_graph_Dean_clicked();
    void on_add_parametrs_to_all_graphs_Dean_clicked();
};

#endif // DEAN_MENU_H
