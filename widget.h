#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimer>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    QTimer *testTimer;


public slots:
    void testSLot();
};
#endif // WIDGET_H
