#include "dean_menu_nu.h"
#include "ui_dean_menu_nu.h"

dean_menu_nu::dean_menu_nu(QWidget *parent) :
    dean_menu(parent),
    ui(new Ui::dean_menu_nu)
{
    ui->setupUi(this);
}

dean_menu_nu::~dean_menu_nu()
{
    delete ui;
}
