#include <iostream>
#include "Vehicle.h"
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
using namespace std;

int main(){
    ParkingLot parkingLot(10);
    
    while (parkingLot.getCount()<=10) {
        int type;
        cout << "Enter type of vehicle (1-Car, 2-Bus, 3-Motorbike): ";
        cin >> type;

        Vehicle* newVehicle;
        
        if (type == 1) {
            newVehicle = new Car(parkingLot.getCount() + 1);
            newVehicle->get_ID();
        } else if (type == 2) {
            newVehicle = new Bus(parkingLot.getCount() + 1);
            newVehicle->get_ID();
    
        } else if (type == 3) {
            newVehicle = new Motorbike(parkingLot.getCount() + 1);
            newVehicle->get_ID();
            
        }

        parkingLot.parkVehicle(newVehicle);

        if (parkingLot.getCount() == parkingLot.getCount()) {
            cout << "Parking lot is full." << endl;
        }
    }

    int unparked_ID;
    std::cout << "Enter ID of vehicle to unpark: ";
    std::cin >> unparked_ID;

    parkingLot.unparkVehicle(unparked_ID);

    return 0;
}
