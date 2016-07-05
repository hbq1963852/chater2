#include "myregister.h"
#include "ui_myregister.h"

MyRegister::MyRegister(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyRegister)
{
    ui->setupUi(this);
}

MyRegister::~MyRegister()
{
    delete ui;
}
