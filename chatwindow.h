#ifndef CHATWINDOW_H
#define CHATWINDOW_H

#include <QWidget>

namespace Ui {
class chatWIndow;
}

class chatWIndow : public QWidget
{
    Q_OBJECT

public:
    explicit chatWIndow(QWidget *parent = 0);
    ~chatWIndow();

private:
    Ui::chatWIndow *ui;
};

#endif // CHATWINDOW_H
