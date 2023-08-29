#include <iostream>
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
using namespace std;

int main(){
    ParkingLot parkingLot(10);
    int ID;
    while (parkingLot.getCount()<=10) {
        int type;
        cout << "Enter type of vehicle (1-Car, 2-Bus, 3-Motorbike): ";
        cin >> type;

        Vehicle* newVehicle;
        
        if (type == 1) {
            cout << "Enter ID: ";
            cin >> ID;
            newVehicle = new Car(ID);
            parkingLot.vehicleCount += 1;
        } else if (type == 2) {
            cout << "Enter ID: ";
            cin >> ID;
            newVehicle = new Bus(ID);
            parkingLot.vehicleCount += 1;
        } else if (type == 3) {
            cout << "Enter ID: ";
            cin >> ID;
            newVehicle = new Motorbike(ID);
            parkingLot.vehicleCount += 1;
        }

        parkingLot.parkVehicle(newVehicle);

        if (parkingLot.getCount() == parkingLot.getCount()) {
            cout << "Parking lot is full." << endl;
            break;
        }
    }

    
    std::cout << "Enter ID of vehicle to unpark: ";
    std::cin >> ID;

    parkingLot.unparkVehicle(ID);

    return 0;
}
