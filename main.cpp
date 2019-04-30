#include "ybtmain.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ybtMain w;
    w.show();

    return a.exec();
}
