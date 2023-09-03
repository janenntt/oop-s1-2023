#include <iostream>
#include "Appliance.h"
#include "House.h"
#include "TV.h"
#include "Fridge.h"
using namespace std;

int main(){
    House myHouse(2);

    Appliance* fridge = new Fridge(500,200.0);
    Appliance* tv = new TV(200,40.0);

    myHouse.addAppliance(fridge);
    myHouse.addAppliance(tv);

    fridge->turnOn();
    tv->turnOn();

    double totalPowerConsumption = myHouse.getTotalPowerConsumption();
    cout << "Total power consumption of my house is: " << totalPowerConsumption << "Watts" << endl;

    delete fridge;
    delete tv;
    return 0;

}