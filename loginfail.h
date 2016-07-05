#ifndef LOGINFAIL_H
#define LOGINFAIL_H

#include <QDialog>

namespace Ui {
class logInFail;
}

class logInFail : public QDialog
{
    Q_OBJECT

public:
    explicit logInFail(QWidget *parent = 0);
    ~logInFail();

private slots:
    void on_closeLIF_clicked();

private:
    Ui::logInFail *ui;
};

#endif // LOGINFAIL_H
