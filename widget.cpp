#include "widget.h"
#include <QPainter>
#include "debug.h"
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{

    testTimer = new QTimer(this);
    QObject::connect(testTimer,SIGNAL(timeout()),this,SLOT(testSLot()));
    testTimer->start(300);
}

Widget::~Widget()
{
}

void Widget::testSLot()
{
    DebugPrint(DEBUG_UI_ERROR_PRINT, "save pis server pmsg handle error!\n");

}
