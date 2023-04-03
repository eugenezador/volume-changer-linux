#include "sound.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    sound w;
    w.show();
    return a.exec();
}
