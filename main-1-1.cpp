#include <iostream>
#include "Appliance.h"
using namespace std;

int main(){
    Appliance fridge(500);
    Appliance tv(100);

    cout << "Power rating of fridge is: " << fridge.set_powerRating() << endl;
    cout << "Power rating of TV is: " << tv.set_powerRating() << endl;

    fridge.turnOn();
    tv.turnOn();

    cout << "Is the fridge turned on (1 - Yes, 0 - No)? " << fridge.get_isOn() << endl;
    cout << "Is the TV turned on (1 - Yes, 0 - No)? " << tv.get_isOn() << endl;

    cout << "Power consumption of fridge: " << fridge.getPowerConsumption() << endl;
    cout << "Power consumption of TV: " << tv.getPowerConsumption() << endl; 
 
    return 0;
}