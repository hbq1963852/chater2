#include "chatwindow.h"
#include "ui_chatwindow.h"

chatWIndow::chatWIndow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::chatWIndow)
{
    ui->setupUi(this);
}

chatWIndow::~chatWIndow()
{
    delete ui;
}
