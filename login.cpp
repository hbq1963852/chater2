#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"
#include "myregister.h"
#include <QWidget>
#include <QDebug>

logIn::logIn(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::logIn)
{
    ui->setupUi(this);
    ui->logInFail->setHidden(true);
    ui->logInUserNameLE->setFocus();
}

logIn::~logIn()
{
    delete ui;
}

void logIn::on_closeLogIn_clicked()
{
    close();
}

void logIn::on_logInBtn_clicked()
{
    if(0){
        close();
        MainWindow *MW = new MainWindow();
        MW->show();
    }
    else{
        ui->logInFail->setHidden(false);
        if(0){
            ui->logInFail->setText("用户名不存在！");
            ui->logInUserNameLE->setFocus();
        }
        else{
            ui->logInFail->setText("密码错误");
            ui->logInPasswordLE->setFocus();
        }
    }
}

void logIn::on_registerBtn_clicked()
{
    MyRegister *MR = new MyRegister();
    MR->setWindowModality(Qt::ApplicationModal);
    MR->show();
}

void logIn::on_logInUserNameLE_returnPressed()
{
    ui->logInPasswordLE->setFocus();
}

void logIn::on_logInPasswordLE_returnPressed()
{
    on_logInBtn_clicked();
}

void logIn::keyPressEvent(QKeyEvent *event)
{

    switch(event->key())
    {
    case Qt::Key_Return:
    case Qt::Key_Enter:
        break;
    default:
        ui->logInFail->setHidden(true);
        break;
    }
}

void logIn::on_logInUserNameLE_textEdited(const QString &arg1)
{
    qDebug() << "dhsajkdhkasj";
}
