#ifndef CONCRETE_STRATEGY_B_H
#define CONCRETE_STRATEGY_B_H

#include "Strategy.h"

class ConcreteStrategyB : public Strategy
{
public:
    ConcreteStrategyB();
    virtual ~ConcreteStrategyB();

    virtual void algorithm();
};

#endif