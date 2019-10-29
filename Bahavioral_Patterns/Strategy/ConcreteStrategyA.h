#ifndef CONCRETE_STRATEGT_A_H
#define CONCRETE_STRATEGY_A_H

#include "Strategy.h"

class ConcreteStrategyA : public Strategy
{
public:
    ConcreteStrategyA();
    virtual ~ConcreteStrategyA();

    virtual void algorithm();
};

#endif