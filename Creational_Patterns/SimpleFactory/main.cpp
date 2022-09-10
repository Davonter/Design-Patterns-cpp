#include <iostream>
#include "Factory.h"
#include "Product.h"

using namespace std;

int main(int argc, char *argv[]) {

    std::unique_ptr<Product> prod = Factory::createProduct("A");
    prod->Use();

    return 0;
}