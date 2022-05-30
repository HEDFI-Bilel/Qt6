#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>
#include <QDebug>
class MyClass : public QObject
{
    Q_OBJECT
public:
    explicit MyClass(QObject *parent = nullptr);
    ~ MyClass(); //destructor
    void DoAction();
signals:

};

#endif // MYCLASS_H
