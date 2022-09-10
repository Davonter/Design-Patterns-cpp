#ifndef __FACTORY__
#define __FACTORY__

#include <string>
#include <memory>
#include "Product.h"

using namespace std;

class Factory {

public:
    Factory();
    virtual ~Factory();
    
    static std::unique_ptr<Product> createProduct(const string& proname);
};

#endif