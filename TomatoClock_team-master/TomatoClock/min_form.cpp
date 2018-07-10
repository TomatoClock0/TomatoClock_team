#include "min_form.h"
#include "ui_min_form.h"

min_form::min_form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::min_form)
{
    ui->setupUi(this);
}

min_form::~min_form()
{
    delete ui;
}
