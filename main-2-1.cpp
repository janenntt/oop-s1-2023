#include <iostream>
#include "Appliance.h"
#include "Fridge.h"
using namespace std;


int main(){
    Fridge samsung(500,100.0); 

    cout << "Power rating of the fridge: " << samsung.get_powerRating() << " Watts" << endl;
    cout << "Volume of the fridge: " << samsung.getVolume() << " litres" << endl;

    samsung.turnOn();

    cout << "Is the fridge turned on (1 - Yes, 0 - No) ? " << samsung.isTurnedOn() << endl;
    cout << "Power consumption of this fridge: " << samsung.getPowerConsumption() << "kWh" << endl;

    return 0;

}

