#include "onesolmain.h"
#include <QApplication>
#include <dbmanager.h>
#define OneSolMainInstance Singleton<OneSolMain>::instance()
#define DbManagerInstance Singleton<DbManager>::instance()
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //OneSolMain w;
    // w.show();
    DbManagerInstance.open();
    OneSolMainInstance;

    return a.exec();
}
