#include <iostream>
#include <string>
#include "Car.hpp"
#include "Truck.hpp"
#include "TruckWithTrailer.hpp"
#include "Bridge.hpp"
#include "Physics.hpp"

using namespace std;





int main()
{
    Bridge* b = new Bridge(1000);
    //ve Phisics se uplatnuje kopmpozice ("ma")
    Physics* p = new Physics(b , 1, 2);
    //vsechny auta dedi z ciste abstraktni tridy abstractVehicle(ciste virtual metoda o pocitani vahy)
    p->addCar(1.5, 4);
    p->addTruck(4.5, 15);
    //TruckWithTrailer dedi z Truck("je" specialni pripad)
    p->addTruckWithTrailer(4.5, 20, 6); //polymorfni prirazeni (do ukazatele na predka se uklada potomek)
                                        //virtual konstruktor

    //tridni polozky (lekce trida jako objekt)
    cout << Car::GetObjCounter() + Truck::GetObjCounter() << " vehicles are trying to get through the bridge"<<endl;
    cout << "Can pass?" << endl;
    if (p->CanPassAtOnce())
    {
        cout << "Yes, All cars got passed the bridge" << endl;
    }
    else
    {
        cout << "No, too much Bridge will collpase!!!" << endl; 
    }
    

    delete b;
    delete p;
    return 0;
}