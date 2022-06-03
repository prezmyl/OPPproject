#ifndef TRUCKWITHTRAILER_HPP
#define TRUCKWITHTRAILER_HPP
#include <iostream>
#include <string>
#include "Truck.hpp"

class TruckWithTrailer : public Truck //dedi z truck (specialni pripad)
{
private:
    float twt_trailerWeight;

public:
    TruckWithTrailer(float twt_c, float twt_cg, float twt_tr);
    virtual ~TruckWithTrailer(); //pripadne polymorfni reseni
    float ComputeWeight();

};

#endif