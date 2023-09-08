#include <iostream>
#include "Ford.h"
using namespace std;

int main(){
    Ford myFord(3, 300000);
    myFord.refuel(70);
    myFord.drive(200);

    cout << "Ford badge number is: " << myFord.get_badgeNumber() << endl;
    cout << "Litres of fuel: " << myFord.get_litresOfFuel() << " litres" << endl;
    cout << "Emissions: " << myFord.get_emissions() << " g" << endl;

    return 0;
}