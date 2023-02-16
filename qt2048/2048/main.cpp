#include "widget.h"
#include"mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget::chushi();
    MainWindow m;
    m.setWindowTitle("2048 Game");
    m.show();
    return a.exec();
}
