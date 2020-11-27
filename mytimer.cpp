#include "mytimer.h"

MyTimer::MyTimer(QStringList *list_): _list(list_)
{
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MyTimer::update);
    timer->start(1000);
}

void MyTimer::update()
{
    _list -> sort();
}
