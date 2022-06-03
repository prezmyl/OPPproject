#ifndef PHYSICS_HPP
#define PHYSICS_HPP

#include <iostream>
#include <string>
#include "Car.hpp"
#include "Truck.hpp"
#include "TruckWithTrailer.hpp"
#include "Bridge.hpp"

using namespace std;
//Skladani - kompozicni trida
class Physics
{
private:
    Bridge *bridge;

    Car **cars;
    int cCount;
    Truck **trucks; //tady by mel byt uplatnen (polymorfismu)<- predek, potomek v jednom poli
    int tCount;
public:
    Physics(Bridge* b, int nC, int nT);
    ~Physics();
    Car* addCar(float cW, int nP);
    Truck* addTruck(float cW, float cgW);
    TruckWithTrailer* addTruckWithTrailer(float cW, float cgW, float tW);
    float ComputeWeigtCars();
    float ComputeWeigtTrucks();
    bool CanPassAtOnce();
};


#endif