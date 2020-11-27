#ifndef MYTIMER_H
#define MYTIMER_H

#include <QStringListModel>
#include <QTimer>

class MyTimer : public QObject
{
private:
    QAbstractItemModel *_model;
public:
    MyTimer(QAbstractItemModel *model_);
    void _update();
};

#endif // MYTIMER_H
