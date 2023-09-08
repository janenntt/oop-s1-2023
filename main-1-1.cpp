#include <iostream>
#include "AirVehicle.h"
using namespace std;

int main(){
    AirVehicle a(3000);

    a.set_numberOfFlights(0);
    a.refuel();
    a.fly(30,10);

    cout << a.get_fuel() << endl;
    cout << a.get_numberOfFlights() << endl;
    return 0;
}