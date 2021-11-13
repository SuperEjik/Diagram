#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "draw_de_d.h"
#include "draw_de_nu.h"
#include "draw_de_p.h"
#include "draw_de_r.h"
#include "draw_de_v.h"

#include <QMdiSubWindow>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    first_tab = true;
    inductance_tab = false;
    Dean_flow_tab = false;

    dean_m = new dean_menu();

    X = 0;
    //this->setWindowIcon(QPixmap(":/resource/pic/lable_ipu.png"));

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

void MainWindow::add_tab_and_grapf()
{
    QObject* button = QObject::sender();


    if(button == ui->actionDe_D || button == ui->actionDe_p || button == ui->actionDe_r || button == ui->actionDe_v || button == ui->actionDe_nu)
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
            case 10:
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
            case 11:
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
            case 12:
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
            case 13:
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
            case 14:
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

void MainWindow::on_actionDe_p_triggered()
{
    X = 10;
    X_axis_name = 'p';
    add_tab_and_grapf();
}

void MainWindow::on_actionDe_r_triggered()
{
    X = 11;
    X_axis_name = 'r';
    add_tab_and_grapf();
}


void MainWindow::on_actionDe_D_triggered()
{
    X = 12;
    X_axis_name = 'D';
    add_tab_and_grapf();
}


void MainWindow::on_actionDe_v_triggered()
{
    X = 13;
    X_axis_name = 'v';
    add_tab_and_grapf();
}


void MainWindow::on_actionDe_nu_triggered()
{
    X = 14;
    X_axis_name = 'u';
    add_tab_and_grapf();
}
