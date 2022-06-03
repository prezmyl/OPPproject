#ifndef TRUCK_HPP
#define TRUCK_HPP
#include <iostream>
#include <string>
#include "AbstractVehicle.hpp"

using namespace std;

//dedi z abstraktni tridy
class Truck : public AbstractVehicle
{
protected:
    float t_carWeight;
    float t_cargoWeight;
    static int objCount; //pocitadlo objektu static (tridni polozka)

public:
    Truck(float t_c, float t_cg);
    virtual ~Truck(); //pripadne polymorfni reseni
    float ComputeWeight();
    static int GetObjCounter(); //metoda static nepotrebuje instanci

};

#endif