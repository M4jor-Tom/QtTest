#include "mytimer.h"

MyTimer::MyTimer()
{
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MyTimer::update);
    timer->start(1000);
}

void MyTimer::update()
{

}
