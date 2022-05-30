/*
    What
    Pointers vs copies
    Why
    Pointers are fast, and we get the actual object
    How
    See below
*/

#include <QCoreApplication>
#include <QDebug>
#include <iostream>

void test(QString value) //Stack - COPY
{
       std::cout <<"By Copy "<<std::endl  ;
    qInfo() << &value << "Size:" << value.length();
    //compiler will copy the Value in an other memory location.

} //Destrory

void testPtr(QString *value) //Stack - Pointing
{
    std::cout <<"By Pointer "<<std::endl ;
   qInfo() << "Pointer: " << value << " Size: " << value->length(); // 0x7fff84fb1410   same memory location
   qInfo() << "Address: " << &value << " Size: " << value->length(); // also copy the value in an other memoty location
} //Destrory

void testAdd( const QString &value  ) //Stack - Pointing
{
    std::cout <<"By Address"<<std::endl ;
   qInfo() << "Address: " << &value << " Size: " << value.length();// 0x7fff84fb1410   same memory location
} //Destrory
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name = "Pilel"; //Stack

    qInfo() << &name << " Size: " << name.length(); // 0x7fff84fb1410

   test(name); // by Copy  , Stack
   testAdd(name); // by Address , Stack
   testPtr(&name);// by Pointer , Stack



    return a.exec();

}
