#include <iostream>
#include "Car.h"
using namespace std;

int main(){
    Car myCar(100000);
    myCar.drive(100);


    myCar.set_emissions(200);
    cout << "My car's price: " << myCar.get_price() << endl;
    cout << "My car's emissions: " << myCar.get_emissions() << " g" << endl;

    return 0;
}