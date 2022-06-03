#ifndef CAR_HPP
#define CAR_HPP
#include <iostream>
#include <string>
#include "AbstractVehicle.hpp"

using namespace std;

//dedi z abstraktni tridy
class Car : public AbstractVehicle
{
private:
    float c_carWeight;
    int numOsob;
    static float avPerWeight;
    static int objCount;  //pocitadlo objektu static (tridni polozka)

public:
    Car(float c_c, int c_nP);
    virtual ~Car(); //pripadne polymorfni reseni
    float ComputeWeight();
    static int GetObjCounter();

};

#endif