#ifndef ABSTRACT_CLASS_H
#define ABSTRACT_CLASS_H

#include <iostream>
using namespace std;

class CAbstractClass
{
public:
    CAbstractClass();
    virtual ~CAbstractClass();

    int run();

protected:
    virtual int stat() = 0;
    
    virtual int clusterInit()
    {
        return 0;
    }

    virtual int clusterStat()
    {
        return 0;
    }

    int getWorldId()
    {
        cout << "1" << endl;
        return 1;
    }
};

#endif //ABSTRACT_CLASS_H