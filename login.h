#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QKeyEvent>
namespace Ui {
class logIn;
}

class logIn : public QWidget
{
    Q_OBJECT

public:
    explicit logIn(QWidget *parent = 0);
    ~logIn();

protected:
    void keyPressEvent(QKeyEvent *event);
    //event.key() == Qt::Key_Return || event.key() == Qt::Key_Enter
private slots:
    void on_closeLogIn_clicked();

    void on_logInBtn_clicked();

    void on_registerBtn_clicked();
    //set focus from username to password after press enter
    void on_logInUserNameLE_returnPressed();

    void on_logInPasswordLE_returnPressed();

    void on_logInUserNameLE_textEdited(const QString &arg1);

private:
    Ui::logIn *ui;
};

#endif // LOGIN_H
