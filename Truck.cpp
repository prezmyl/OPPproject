#include "Truck.hpp"

int Truck::objCount = 0;

Truck::Truck(float t_c, float t_cg)
{
    this->t_carWeight = t_c;
    this->t_cargoWeight = t_cg;
    Truck::objCount += 1;
}

Truck::~Truck()
{
    Truck::objCount -= 1;
}

float Truck::ComputeWeight()
{
    return (this->t_carWeight + this->t_cargoWeight);
}

int Truck::GetObjCounter()
{
    return Truck::objCount;
}