#ifndef MANAGETASKS_H
#define MANAGETASKS_H

#include <QDialog>

namespace Ui {
class managetasks;
}

class managetasks : public QDialog
{
    Q_OBJECT

public:
    explicit managetasks(QWidget *parent = 0);
    ~managetasks();

private:
    Ui::managetasks *ui;
};

#endif // MANAGETASKS_H
