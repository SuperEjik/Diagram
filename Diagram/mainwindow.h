#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "dean_flow_calculation.h"
#include "inductance_calculation.h"
#include "inductance_menu.h"
#include "dean_menu.h"
#include <QMdiArea>
#include <string.h>
#include <QPointer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class Draw_L_nu;
class Draw_L_N;
class Draw_L_R;
class Draw_L_Inner_r;
class Draw_L_h;

class Draw_De_D;
class Draw_De_nu;
class Draw_De_p;
class Draw_De_r;
class Draw_De_v;

class inductance_menu;
class dean_menu;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void on_Dean_number_calculator_triggered();
    void on_Inductance_calculator_triggered();
    void add_tab_and_grapf();
    void on_actionL_N_triggered();
    void on_actionL_nu_triggered();
    void on_actionL_R_triggered();
    void on_actionL_r_triggered();
    void on_actionL_h_triggered();

    void on_actionDe_r_triggered();
    void on_actionDe_p_triggered();
    void on_actionDe_D_triggered();
    void on_actionDe_v_triggered();
    void on_actionDe_nu_triggered();
    void on_actCascade_triggered();

private:
    Ui::MainWindow *ui;
    dean_flow_calculation *Dean;
    Inductance_calculation *inductance;

    int X;
    QString Y_axis_name;
    char X_axis_name;
    bool first_tab, inductance_tab, Dean_flow_tab;

    QPointer<Draw_L_N> L_N_diagram;
    QPointer<Draw_L_nu> L_nu_diagram;
    QPointer<Draw_L_R> L_R_diagram;
    QPointer<Draw_L_Inner_r> L_Inner_r_diagram;
    QPointer<Draw_L_h> L_h_diagram;

    QPointer<Draw_De_D> De_D_diagram;
    QPointer<Draw_De_nu> De_nu_diagram;
    QPointer<Draw_De_p> De_p_diagram;
    QPointer<Draw_De_r> De_r_diagram;
    QPointer<Draw_De_v> De_v_diagram;

    QPointer<inductance_menu> inductance_m;
    QPointer<dean_menu> dean_m;

    void loadSubWindows(QWidget *widget);

signals:
    void signal_inductance_menu();

private slots:
    void on_actTile_triggered();
};
#endif // MAINWINDOW_H
