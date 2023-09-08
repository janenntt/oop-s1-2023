#include <iostream>
#include "Tesla.h"
using namespace std;

int main() {
    Tesla myTesla('S', 75000);
    myTesla.chargeBattery(70);
    myTesla.drive(50);

    cout << "Tesla Model: " << myTesla.get_model() << endl;
    cout << "Battery Percentage: " << myTesla.get_batteryPercentage() << " %" << endl;
    cout << "Emissions: " << myTesla.get_emissions() << " g" << endl;

    return 0;
}
