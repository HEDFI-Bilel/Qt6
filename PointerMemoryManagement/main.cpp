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

void Dispaly(QString *value) //Stack - COPY
{
 qInfo() << "The Pointer " << value ;
 qInfo() << "The Address " << &value ;
 qInfo() << "The Data " << *value ;



}//Destrory

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name = "Pilel"; //Stack , C++ MAanges this (i.e auto deleted)

    QString NullPointer ;// stack , null pointer
    QString *Pointer  = new QString ("I'm in the Heap , you -the programmer- manage me ");// Heap , We manage this

   std::cout << Pointer <<std::endl ; //0x56154baa6dd0
    Dispaly(Pointer) ;  // The Pointer  0x56154baa6dd0
                        // The Address  0x7ffee4f0b828
                         // The Data  "I'm in the Heap , you -the programmer- manage me "

    delete Pointer ; // it doesn't exist any more
    Dispaly(Pointer) ;   // The Pointer  0x56154baa6dd0
                         // The Address  0x7ffee4f0b828
                         // The Data  "\u0003"


    return a.exec();

}
