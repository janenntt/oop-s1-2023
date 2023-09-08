#include <iostream>
#include "AirVehicle.h"
#include "Airplane.h"
using namespace std;

int main(){
    Airplane p1(3000,100);
    p1.set_fuel(95);
    p1.fly(65,120);
    cout << p1.get_fuel() << endl;
    return 0;
}