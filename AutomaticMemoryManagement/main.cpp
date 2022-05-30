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
#include <myclass.h>


// automatic memory management

void AutomaticMemoryManagement (){
    // AutomaticMemoryManagement
    std::unique_ptr<MyClass> test(new MyClass() ) ;// Craeted this anstance in the Heap
    test->DoAction() ;
    // no need to manually delete the object //Pointer automatically deletd
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

qInfo() <<" staring ...." ;
AutomaticMemoryManagement() ;

/*  MyClass(0x5555f3f96cc0) an instance of MyClass  has been created
    MyClass(0x5555f3f96cc0) void MyClass::DoAction()
    MyClass(0x5555f3f96cc0) the instance of MyClass  has been destr
*/
qInfo() <<" Finished." ;


    return a.exec();

}
