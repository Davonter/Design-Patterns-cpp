#include "Factory.h"
#include "ConcreteProductA.h"
#include "ConcreteProductB.h"

Factory::Factory() {
}

Factory::~Factory() {
}

std::unique_ptr<Product> Factory::createProduct(const string& proname) {

    if("A" == proname) {
        return std::unique_ptr<ConcreteProductA>(new ConcreteProductA);
    } else if("B" == proname) {
        return std::unique_ptr<ConcreteProductB>(new ConcreteProductB);
    }
    
    return nullptr;
}
