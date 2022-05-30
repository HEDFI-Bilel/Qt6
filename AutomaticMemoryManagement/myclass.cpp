#include "myclass.h"

MyClass::MyClass(QObject *parent)
    : QObject{parent}
{
qInfo() <<this <<"an instance of MyClass  has been created " ;
}

MyClass::~MyClass()
{
    qInfo() <<this <<"the instance of MyClass  has been destroyed " ;

}

void MyClass::DoAction()
{
    qInfo() <<this <<Q_FUNC_INFO ;

}
