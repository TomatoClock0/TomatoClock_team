#ifndef ADDTASKS_H
#define ADDTASKS_H

#include <QDialog>

namespace Ui {
class AddTasks;
}

class AddTasks : public QDialog
{
    Q_OBJECT

public:
    explicit AddTasks(QWidget *parent = 0);
    ~AddTasks();

private:
    Ui::AddTasks *ui;
};

#endif // ADDTASKS_H
