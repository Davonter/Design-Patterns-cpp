#include <iostream>
#include "Singleton.h"

Singleton *Singleton::_instance = NULL;

Singleton::Singleton()
{
    std::cout << "Singleton::Singleton()" << std::endl;
}

Singleton::~Singleton()
{
    
}

Singleton *Singleton::Instance()
{
    if(_instance == NULL)
    {
        _instance = new Singleton;
    }
    
    return _instance;
}