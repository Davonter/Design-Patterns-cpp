#ifndef __PRODUCT__
#define __PRODUCT__

class Product
{
public:
    Product();
    virtual ~Product();
    
    virtual void Use() = 0;
};

#endif