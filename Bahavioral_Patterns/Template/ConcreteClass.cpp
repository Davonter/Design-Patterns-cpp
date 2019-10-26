#include "ConcreteClass.h"

ConcreteClass::ConcreteClass()
{
    cout << "concrete class construct" << endl;
}

ConcreteClass::~ConcreteClass()
{
    cout << "concreteclass destruct" << endl;
}


int ConcreteClass::stat()
{
    cout << "ConcreteClass::stat()" << endl;
}