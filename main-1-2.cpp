#include <iostream>
#include "Vehicle.h"
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
using namespace std;

int main(){
    ParkingLot parkingLot(10);

    while(true){
        cout << "Enter vehicle ID to park: ";
        int vehicleID;
        cin >> vehicleID;

        Vehicle* vehicle = new Vehicle(vehicleID);
        parkingLot.parkVehicle(vehicle);

    }
    

    int unparked_ID;
    cout << "Enter ID of vehicle to unpark: ";
    cin >> unparked_ID;

    parkingLot.unparkVehicle(unparked_ID);

    return 0;
}
