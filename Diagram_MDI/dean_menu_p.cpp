#include "dean_menu_p.h"
#include "ui_dean_menu_p.h"

dean_menu_p::dean_menu_p(QWidget *parent) :
    dean_menu(parent),
    ui(new Ui::dean_menu_p)
{
    ui->setupUi(this);
}

dean_menu_p::~dean_menu_p()
{
    delete ui;
}
