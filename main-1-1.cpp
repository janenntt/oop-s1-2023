#include <iostream>
#include "Appliance.h"
using namespace std;

int main(){
    Appliance fridge(500);
    Appliance tv(100);

    cout << "Power rating of fridge is: " << fridge.get_powerRating() << endl;
    cout << "Power rating of TV is: " << tv.get_powerRating() << endl;

    fridge.turnOn();
    tv.turnOn();

    cout << "Is the fridge turned on (1 - Yes, 0 - No)? " << fridge.isTurnedOn() << endl;
    cout << "Is the TV turned on (1 - Yes, 0 - No)? " << tv.isTurnedOn() << endl;

    cout << "Power consumption of fridge: " << fridge.getPowerConsumption() << endl;
    cout << "Power consumption of TV: " << tv.getPowerConsumption() << endl; 
 
    return 0;
}