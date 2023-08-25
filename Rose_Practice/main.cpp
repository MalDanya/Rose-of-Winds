#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QPalette pal = QPalette();
    pal.setColor(QPalette::Window, QColor(27 , 57, 103, 255));
    w.setAutoFillBackground(true);
    w.setPalette(pal);
    w.show();
    return a.exec();
}
