#ifndef __FACTORY__
#define __FACTORY__

#include <string>
#include "Product.h"

using namespace std;

class Factory
{
public:
    Factory();
    virtual ~Factory();
    
    static Product *createProduct(string proname);
};

#endif