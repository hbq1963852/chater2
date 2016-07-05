#include "loginfail.h"
#include "ui_loginfail.h"

logInFail::logInFail(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::logInFail)
{
    ui->setupUi(this);
}

logInFail::~logInFail()
{
    delete ui;
}

void logInFail::on_closeLIF_clicked()
{
    close();
}
