#ifndef DEAN_MENU_H
#define DEAN_MENU_H

#include <QWidget>

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
    double D, nu, p, r, v, number_y;


signals:
    void signal_De_D(double, double);
    void signal_De_nu(double, double);
    void signal_De_p(double, double);
    void signal_De_r(double, double);
    void signal_De_v(double, double);
private slots:
    void on_calculation_Dean_clicked();
    void on_Value_delete_clicked();
};

#endif // DEAN_MENU_H
