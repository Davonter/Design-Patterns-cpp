#ifndef CONCRETE_CLASS_H
#define CONCRETE_CLASS_H

#include "AbstractClass.h"

class ConcreteClass : public CAbstractClass
{
public:
    ConcreteClass();
    virtual ~ConcreteClass();

protected:
    virtual int stat();
    virtual int clusterInit()
    {
        cout << "ConcreteClass clusterInit()" << endl;
    }

    virtual int clusterStat()
    {
        cout << "ConcreteClass clusterStat()" << endl;
    }
};

#endif