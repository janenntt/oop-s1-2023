#include <iostream>
#include "Appliance.h"
using namespace std;

int main(){
    Appliance fridge(500);
    

    cout << "Power rating of fridge is: " << fridge.get_powerRating() << endl;
   
    fridge.turnOn();
    cout << "Is the fridge turned on (1 - Yes, 0 - No)? " << fridge.get_isOn() << endl;
    
    fridge.set_powerRating(700);
    cout << "New power rating of fridge: " << fridge.get_powerRating() << endl;
    cout << "Power consumption of fridge: " << fridge.getPowerConsumption() << endl;
    
 
    return 0;
}