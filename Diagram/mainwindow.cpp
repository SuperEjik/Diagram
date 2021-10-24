#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "inductance_menu.h"
#include "draw_l_n.h"
#include "draw_l_nu.h"
#include "draw_l_R.h"
#include "draw_l_inner_r.h"
#include "draw_l_h.h"

#include "draw_de_d.h"
#include "draw_de_nu.h"
#include "draw_de_p.h"
#include "draw_de_r.h"
#include "draw_de_v.h"

#include <QMdiSubWindow>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    first_tab = true;
    inductance_tab = false;
    Dean_flow_tab = false;

    inductance_m = new inductance_menu();
    dean_m = new dean_menu();

    X = 0;

    title_view = true;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Dean_number_calculator_triggered()
{
    Dean = new dean_flow_calculation();
    Dean->show();
}

void MainWindow::on_Inductance_calculator_triggered()
{
    inductance = new Inductance_calculation();
    inductance->show();
}

void MainWindow::add_tab_and_grapf()
{

    QObject* button = QObject::sender();

    if (button == ui->actionL_N || button == ui->actionL_R || button == ui->actionL_h || button == ui->actionL_nu || button == ui->actionL_r)
    {
        Y_axis_name = 'L';

        if(inductance_tab == false)
        {
            inductance_tab = true;
            ui->tabWidget->addTab(inductance_m, "Индуктивность");
        }

        if(first_tab == true)
        {
            first_tab = false;
            ui->tabWidget->removeTab(0); // removes the tab at the index 1 which is the second tab from left
        }

        switch (X)
        {
            case 10:
                {
                    if(L_N_diagram)
                    {
                        connect(inductance_m, &inductance_menu::signal_L_N, L_N_diagram, &Draw_L_N::draw_graph);
                        break;
                    }
                    else
                    {
                        L_N_diagram = new Draw_L_N(this);
                        loadSubWindows(L_N_diagram);
                        connect(inductance_m, &inductance_menu::signal_L_N, L_N_diagram, &Draw_L_N::draw_graph);
                        break;
                    }
                }
            case 11:
                {
                    if(L_nu_diagram)
                    {
                        connect(inductance_m, &inductance_menu::signal_L_nu, L_nu_diagram, &Draw_L_nu::draw_graph);
                        break;
                    }
                    else
                    {
                        L_nu_diagram = new Draw_L_nu(this);
                        loadSubWindows(L_nu_diagram);
                        connect(inductance_m, &inductance_menu::signal_L_nu, L_nu_diagram, &Draw_L_nu::draw_graph);
                        break;
                    }
                }
            case 12:
                {
                    if(L_R_diagram)
                    {
                        connect(inductance_m, &inductance_menu::signal_L_R, L_R_diagram, &Draw_L_R::draw_graph);
                        break;
                    }
                    else
                    {
                        L_R_diagram = new Draw_L_R(this);
                        loadSubWindows(L_R_diagram);
                        connect(inductance_m, &inductance_menu::signal_L_R, L_R_diagram, &Draw_L_R::draw_graph);
                        break;
                    }
                }
            case 13:
                {
                    if(L_Inner_r_diagram)
                    {
                        connect(inductance_m, &inductance_menu::signal_L_r, L_Inner_r_diagram, &Draw_L_Inner_r::draw_graph);
                        break;
                    }
                    else
                    {
                        L_Inner_r_diagram = new Draw_L_Inner_r(this);
                        loadSubWindows(L_Inner_r_diagram);
                        connect(inductance_m, &inductance_menu::signal_L_r, L_Inner_r_diagram, &Draw_L_Inner_r::draw_graph);
                        break;
                    }
                }
            case 14:
                {
                    if(L_h_diagram)
                    {
                        connect(inductance_m, &inductance_menu::signal_L_h, L_h_diagram, &Draw_L_h::draw_graph);
                        break;
                    }
                    else
                    {
                        L_h_diagram = new Draw_L_h(this);
                        loadSubWindows(L_h_diagram);
                        connect(inductance_m, &inductance_menu::signal_L_h, L_h_diagram, &Draw_L_h::draw_graph);
                        break;
                    }
                }
        }
    }

    else if(button == ui->actionDe_D || button == ui->actionDe_p || button == ui->actionDe_r || button == ui->actionDe_v || button == ui->actionDe_nu)
    {
        Y_axis_name = "De";

        if(Dean_flow_tab == false)
        {
            Dean_flow_tab = true;
            ui->tabWidget->addTab(dean_m, "Число Дина");
        }

        if(first_tab == true)
        {
            first_tab = false;
            ui->tabWidget->removeTab(0); // removes the tab at the index 1 which is the second tab from left
        }

        switch (X)
        {
            case 20:
                {
                    if(De_p_diagram)
                    {
                        connect(dean_m, &dean_menu::signal_De_p, De_p_diagram, &Draw_De_p::draw_graph);
                        break;
                    }
                    else
                    {
                        De_p_diagram = new Draw_De_p(this);
                        loadSubWindows(De_p_diagram);
                        connect(dean_m, &dean_menu::signal_De_p, De_p_diagram, &Draw_De_p::draw_graph);
                        break;
                    }
                }
            case 21:
                {
                    if(De_r_diagram)
                    {
                        connect(dean_m, &dean_menu::signal_De_D, De_r_diagram, &Draw_De_r::draw_graph);
                        break;
                    }
                    else
                    {
                        De_r_diagram = new Draw_De_r(this);
                        loadSubWindows(De_r_diagram);
                        connect(dean_m, &dean_menu::signal_De_r, De_r_diagram, &Draw_De_r::draw_graph);
                        break;
                    }
                }
            case 22:
                {
                    if(De_D_diagram)
                    {
                        connect(dean_m, &dean_menu::signal_De_D, De_D_diagram, &Draw_De_D::draw_graph);
                        break;
                    }
                    else
                    {
                        De_D_diagram = new Draw_De_D(this);
                        loadSubWindows(De_D_diagram);
                        connect(dean_m, &dean_menu::signal_De_D, De_D_diagram, &Draw_De_D::draw_graph);
                        break;
                    }
                }
            case 23:
                {
                    if(De_v_diagram)
                    {
                        connect(dean_m, &dean_menu::signal_De_v, De_v_diagram, &Draw_De_v::draw_graph);
                        break;
                    }
                    else
                    {
                        De_v_diagram = new Draw_De_v(this);
                        loadSubWindows(De_v_diagram);
                        connect(dean_m, &dean_menu::signal_De_v, De_v_diagram, &Draw_De_v::draw_graph);
                        break;
                    }
                }
            case 24:
                {
                    if(De_nu_diagram)
                    {
                        connect(dean_m, &dean_menu::signal_De_nu, De_nu_diagram, &Draw_De_nu::draw_graph);
                        break;
                    }
                    else
                    {
                        De_nu_diagram = new Draw_De_nu(this);
                        loadSubWindows(De_nu_diagram);
                        connect(dean_m, &dean_menu::signal_De_nu, De_nu_diagram, &Draw_De_nu::draw_graph);
                        break;
                    }
                }
        }
    }
}

void MainWindow::loadSubWindows(QWidget *widget)
{
    auto window = ui->mdiArea->addSubWindow(widget);

    window->setWindowTitle(widget->windowTitle());
    window->setWindowIcon(widget->windowIcon());

    // Устанавливаем заголовок окна
    window->setWindowTitle("Диаграмма " + QString(Y_axis_name) + " от " + QString(X_axis_name));

    window->show();

    //ui->mdiArea->cascadeSubWindows();

    if(title_view == true)
    {
        ui->mdiArea->tileSubWindows();
    }
    else
    {
        ui->mdiArea->cascadeSubWindows();
    }
}

void MainWindow::on_actCascade_triggered()//выбор расположения окон
{
    ui->mdiArea->cascadeSubWindows();
    title_view = false;
}

void MainWindow::on_actTile_triggered()//выбор расположения окон
{
    ui->mdiArea->tileSubWindows();
    title_view = true;
}


void MainWindow::on_actionL_N_triggered()
{
    X = 10;
    X_axis_name = 'N';
    add_tab_and_grapf();
}


void MainWindow::on_actionL_nu_triggered()
{
    X = 11;
    X_axis_name = 'u';
    add_tab_and_grapf();
}


void MainWindow::on_actionL_R_triggered()
{
    X = 12;
    X_axis_name = 'R';
    add_tab_and_grapf();
}


void MainWindow::on_actionL_r_triggered()
{
    X = 13;
    X_axis_name = 'r';
    add_tab_and_grapf();
}


void MainWindow::on_actionL_h_triggered()
{
    X = 14;
    X_axis_name = 'h';
    add_tab_and_grapf();
}

void MainWindow::on_actionDe_p_triggered()
{
    X = 20;
    X_axis_name = 'p';
    add_tab_and_grapf();
}

void MainWindow::on_actionDe_r_triggered()
{
    X = 21;
    X_axis_name = 'r';
    add_tab_and_grapf();
}


void MainWindow::on_actionDe_D_triggered()
{
    X = 22;
    X_axis_name = 'D';
    add_tab_and_grapf();
}


void MainWindow::on_actionDe_v_triggered()
{
    X = 23;
    X_axis_name = 'v';
    add_tab_and_grapf();
}


void MainWindow::on_actionDe_nu_triggered()
{
    X = 24;
    X_axis_name = 'u';
    add_tab_and_grapf();
}
