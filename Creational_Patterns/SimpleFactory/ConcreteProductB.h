#ifndef __CONCRETEPRODUCTB__
#define __CONCRETEPRODUCTB__

#include "Product.h"

class ConcreteProductB : public Product
{
public:
    ConcreteProductB();
    virtual ~ConcreteProductB();
    
    virtual void Use();
};

#endif