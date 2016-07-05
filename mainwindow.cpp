#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "chatwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_listWidget_doubleClicked(const QModelIndex &index)
{
    chatWIndow *CW = new chatWIndow();
    CW->show();
}
