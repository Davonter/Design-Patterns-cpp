#include "AbstractClass.h"
#include "ConcreteClass.h"

using namespace std;

int main()
{
    CAbstractClass *pStat = new ConcreteClass();

    pStat->run();

    delete pStat;

    return 0;
}