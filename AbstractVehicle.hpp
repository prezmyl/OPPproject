#ifndef ABSTRACTVEHICLE_HPP
#define ABSTRACTVEHICLE_HPP

#include <iostream>
#include <string>

using namespace std;


class AbstractVehicle
{
public:
    AbstractVehicle();
    virtual ~AbstractVehicle(); //abstr. tridy uplatnuji polymorfismus(potomek v ruznych rolich
    virtual float ComputeWeight() = 0;

};


#endif