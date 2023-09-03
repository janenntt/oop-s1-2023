#include <iostream>
#include "Appliance.h"
#include "TV.h"
using namespace std;

int main(){
    TV myTV(100, 50.0); 

    cout << "Power rating of the TV is: " << myTV.set_powerRating() << " Watts" << endl;
    cout << "Screen size of the TV is: " << myTV.getScreenSize() << " inches" << endl;
    cout << "Power consumption of the TV is: " << myTV.getPowerConsumption() << " kWh " << endl;
    myTV.setScreenSize(55.0);
    cout << "Updated TV screen size: " << myTV.getScreenSize() << "inches" << endl;
    cout << "Updated power consumption of the TV is: " << myTV.getPowerConsumption() << " kWh " << endl;
    
    return 0;
}