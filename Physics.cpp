#include "Physics.hpp"


Physics::Physics(Bridge* b, int nC, int nT)
{
    this->bridge = b;
    this->cars = new Car*[nC];
    this->trucks =new Truck*[nT];
    this->cCount = 0;
    this->tCount = 0;
}

Physics::~Physics()
{
    for (int i = 0; i < this->cCount; i++)
    {
        delete this->cars[i];
    }
    delete[] cars;

    for (int i = 0; i < this->tCount; i++)
    {
        delete this->trucks[i];
    }
    delete[] trucks;
    
}


Car* Physics::addCar(float cW, int nP)
{
    Car* toAdd = new Car(cW, nP);
    this->cars[this->cCount] = toAdd;
    this->cCount++;
    
    return toAdd;
}

Truck* Physics::addTruck(float cW, float cgW)
{
    Truck* toAdd = new Truck(cW, cgW);
    this->trucks[this->tCount] = toAdd;
    this->tCount++;
    
    return toAdd;
}

TruckWithTrailer* Physics::addTruckWithTrailer(float cW, float cgW, float tW)
{
    TruckWithTrailer* toAdd = new TruckWithTrailer(cW, cgW, tW);
    this->trucks[this->tCount] = toAdd;
    this->tCount++;
    
    return toAdd;
}

float Physics::ComputeWeigtCars()
{
    float total = 0;
    for (int i = 0; i < this->cCount; i++)
    {
        total += this->cars[i]->ComputeWeight();
        
    }
    cout << "totalCars Weight:" << total << endl;
    
    return total;
}

float Physics::ComputeWeigtTrucks()
{
    float total = 0;
    for (int i = 0; i < this->tCount; i++)
    {
        total += this->trucks[i]->ComputeWeight();
        
    }
    cout << "totalTrucks Weight: " << total << endl;
    return total;
}

bool Physics::CanPassAtOnce()
{
    if (this->ComputeWeigtCars() + this->ComputeWeigtTrucks() <= this->bridge->GetBridgeLimit())
    {
        return true;
    }
    return false;    

}