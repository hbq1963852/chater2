#ifndef MYREGISTER_H
#define MYREGISTER_H

#include <QWidget>

namespace Ui {
class MyRegister;
}

class MyRegister : public QWidget
{
    Q_OBJECT

public:
    explicit MyRegister(QWidget *parent = 0);
    ~MyRegister();

private:
    Ui::MyRegister *ui;
};

#endif // MYREGISTER_H
