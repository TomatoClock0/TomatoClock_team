#include "managetasks.h"
#include "ui_managetasks.h"
#include "mainwindow.h"
#include "completed.h"
#include "clock.h"
#include "settings.h"


ManageTasks::ManageTasks(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ManageTasks)
{
    ui->setupUi(this);
}

ManageTasks::~ManageTasks()
{
    delete ui;
}

void ManageTasks::on_pushButton_clicked()
{
    MainWindow*todolist=new MainWindow;
    todolist->show();
    this->hide();
}

void ManageTasks::on_pushButton_2_clicked()
{
    Completed*completed=new Completed;
    completed->show();
    this->hide();
}

void ManageTasks::on_pushButton_3_clicked()
{
    Clock*clock=new Clock;
    clock->show();
    this->hide();
}

void ManageTasks::on_pushButton_4_clicked()
{
    Settings*settings=new Settings;
    settings->show();
    this->hide();
}
