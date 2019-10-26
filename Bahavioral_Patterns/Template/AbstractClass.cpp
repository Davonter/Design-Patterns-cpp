#include "AbstractClass.h"

CAbstractClass::CAbstractClass()
{
    cout << "abstract class construct" << endl;
}

CAbstractClass::~CAbstractClass()
{
    cout << "abstract class destruct" << endl;
}

int CAbstractClass::run()
{
    clusterInit();
    stat();
    clusterStat();

    return 0;
}