#include <iostream>
#include <vector>
#include "Context.h"
#include "ConcreteStrategyA.h"
#include "ConcreteStrategyB.h"
#include "Strategy.h"

int main()
{
    Strategy* s1 = new ConcreteStrategyA();
    Context* ctx = new Context();
    ctx->setStrategy(s1);
    ctx->algorithm();

    Strategy* s2 = new ConcreteStrategyB();
    ctx->setStrategy(s2);
    ctx->algorithm();

    delete s1;
    delete s2;

    return 0;
}