#include <iostream>
#include "AirVehicle.h"
#include "Helicopter.h"
#include <string>
using namespace std;

int main(){
    Helicopter h1(3000, "Hello");
    h1.set_fuel(80);
    h1.fly(5690,10);
    cout << h1.get_fuel() << endl;


    return 0;
}