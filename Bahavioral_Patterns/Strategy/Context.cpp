#include "Context.h"

Context::Context()
{

}

Context::~Context()
{

}

void Context::algorithm()
{
    pStrategy_->algorithm();
}

void Context::setStrategy(Strategy* st)
{
    pStrategy_ = st;
}