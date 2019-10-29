#ifndef CONTEXT_H_
#define CONTEXT_H_

#include "Strategy.h"

class Context
{
public:
    Context();
    virtual ~Context();

    void algorithm();
    void setStrategy(Strategy *st);

private:
    Strategy *pStrategy_;
};

#endif