#include "TotemMainWindow.h"
#include <QApplication>
#include "ContentView.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TotemMainWindow w;    
    w.show();

    return a.exec();
}
