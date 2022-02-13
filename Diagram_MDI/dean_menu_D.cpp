#include "dean_menu_D.h"
#include "ui_dean_menu_D.h"

dean_menu_D::dean_menu_D(QWidget *parent) :
    dean_menu(parent),
    ui(new Ui::dean_menu_D)
{
    ui->setupUi(this);
    value_enter();
}

dean_menu_D::~dean_menu_D()
{
    delete ui;
}
