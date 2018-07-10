#ifndef MIN_FORM_H
#define MIN_FORM_H

#include <QWidget>

namespace Ui {
class min_form;
}

class min_form : public QWidget
{
    Q_OBJECT

public:
    explicit min_form(QWidget *parent = 0);
    ~min_form();

private:
    Ui::min_form *ui;
};

#endif // MIN_FORM_H
