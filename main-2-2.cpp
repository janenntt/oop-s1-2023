#include <iostream>
#include "Appliance.h"
#include "TV.h"
using namespace std;

int main(){
    TV myTV(300, 40); 

    cout << "Power rating of the TV is: " << myTV.set_powerRating() << " Watts" << endl;
    cout << "Screen size of the TV is: " << myTV.getScreenSize() << " inches" << endl;

    myTV.turnOn();
    cout << "Is my TV turned on? (1 - Yes, 0 - No)" << myTV.get_isOn() << endl;
    cout << "Power consumption of the TV is: " << myTV.getPowerConsumption() << " kWh " << endl;
    
    return 0;
}