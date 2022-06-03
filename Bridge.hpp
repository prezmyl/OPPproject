#ifndef BRIDGE_HPP
#define BRIDGE_HPP
#include <iostream>
#include <string>

using namespace std;

class Bridge
{
private:
    float b_weightLimit;
public:
    Bridge(float b_wL);
    ~Bridge();
    float GetBridgeLimit();
};

#endif