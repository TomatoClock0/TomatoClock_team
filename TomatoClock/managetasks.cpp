#include "managetasks.h"
#include "ui_managetasks.h"

managetasks::managetasks(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::managetasks)
{
    ui->setupUi(this);
}

managetasks::~managetasks()
{
    delete ui;
}
