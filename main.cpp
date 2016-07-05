#include "login.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    logIn w;
    QPalette palette;
    palette.setBrush(QPalette::Background, QBrush(QPixmap(":/13.jpg")));
    w.setPalette(palette);
    w.setWindowFlags(Qt::FramelessWindowHint);
    w.show();
    return a.exec();
}
