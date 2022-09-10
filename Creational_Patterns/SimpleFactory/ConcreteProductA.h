#ifndef __CONCRETEPRODUCTA__
#define __CONCRETEPRODUCTA__

#include "Product.h"

class ConcreteProductA : public Product {
public:
    ConcreteProductA();
    virtual ~ConcreteProductA();
    
    virtual void Use();
};

#endif