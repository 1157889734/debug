#include "widget.h"

#include <QApplication>
#define DEBUG_PORT 9880
#include "debug.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DebugInit(DEBUG_PORT);    //调试信息模块初始化



    Widget w;
//    w.show();
    return a.exec();

    DebugUninit();

    return 0;

}
