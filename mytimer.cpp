#include "mytimer.h"

MyTimer::MyTimer(QAbstractItemModel *model_): _model(model_)
{
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MyTimer::_update);
    timer -> start(1000);
}

void MyTimer::_update()
{
    _model -> sort(0);
}
