#include "Bridge.hpp"

Bridge::Bridge(float b_wL)
{
    this->b_weightLimit = b_wL;
}

Bridge::~Bridge()
{
}


float Bridge::GetBridgeLimit()
{
    return this->b_weightLimit;
}