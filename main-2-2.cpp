#include <iostream>
#include "Appliance.h"
#include "TV.h"
using namespace std;

int main(){
    TV myTV(300, 40); 

    cout << "Power rating of the TV is: " << myTV.get_powerRating() << " Watts" << endl;
    cout << "Screen size of the TV is: " << myTV.getScreenSize() << " inches" << endl;

    myTV.turnOn();
    cout << "Is my TV turned on? (1 - Yes, 0 - No)" << endl;
    cout << "Power consumption of the TV is: " << myTV.getPowerConsumption() << " kWh " << endl;
    
    return 0;
}