#include "dean_menu_r.h"
#include "ui_dean_menu_r.h"

dean_menu_r::dean_menu_r(QWidget *parent) :
    dean_menu(parent),
    ui(new Ui::dean_menu_r)
{
    ui->setupUi(this);
}

dean_menu_r::~dean_menu_r()
{
    delete ui;
}
