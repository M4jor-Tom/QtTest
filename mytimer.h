#ifndef MYTIMER_H
#define MYTIMER_H

#include <QTimer>

class MyTimer : public QTimer
{
private:
    QStringList *_list;
public:
    MyTimer(QStringList *list_);
    void update();
};

#endif // MYTIMER_H
