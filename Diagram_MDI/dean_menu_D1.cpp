#include "dean_menu_D1.h"
#include "ui_dean_menu_D1.h"

dean_menu_D1::dean_menu_D1(QWidget *parent) :
    dean_menu(parent),
    ui(new Ui::dean_menu_D1)
{
    ui->setupUi(this);
}

dean_menu_D1::~dean_menu_D1()
{
    delete ui;
}
