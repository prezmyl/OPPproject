#include "Car.hpp"

float Car::avPerWeight = 0.05; //dat jinam a pridat metody pristupu
int Car::objCount = 0;

Car::Car(float c_c, int c_nP)
{
    this->c_carWeight = c_c;
    this->numOsob = c_nP;
    Car::objCount += 1;
}

Car::~Car()
{
    Car::objCount -= 1;
}

float Car::ComputeWeight()
{
    return (this->c_carWeight + (this->numOsob * Car::avPerWeight));
}

int Car::GetObjCounter()
{
    return Car::objCount;
}
