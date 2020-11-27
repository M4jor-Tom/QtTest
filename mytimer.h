#ifndef MYTIMER_H
#define MYTIMER_H

#include <QTimer>

class MyTimer : public QTimer
{
public:
    MyTimer();
    void update();
};

#endif // MYTIMER_H
