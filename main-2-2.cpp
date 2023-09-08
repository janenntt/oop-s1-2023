#include <iostream>
#include "AirVehicle.h"
#include "Airplane.h"
#include <string>
using namespace std;

int main(){
    Airplane a1(3000, 100);
    a1.set_fuel(95);
    a1.fly(65,120);
    cout << a1.get_fuel() << endl;

    return 0;
}