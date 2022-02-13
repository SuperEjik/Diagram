#include "dean_menu_v.h"
#include "ui_dean_menu_v.h"

dean_menu_v::dean_menu_v(QWidget *parent) :
    dean_menu(parent),
    ui(new Ui::dean_menu_v)
{
    ui->setupUi(this);
}

dean_menu_v::~dean_menu_v()
{
    delete ui;
}
