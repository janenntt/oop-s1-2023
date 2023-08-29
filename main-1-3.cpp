#include <iostream>
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    ParkingLot parkingLot(10);

    while (true){
        int choice;
        std::cout << "Enter vehicle type (1 for Car, 2 for Bus, 3 for Motorbike): ";
        std::cin >> choice;

        Vehicle* newVehicle;

        if (choice == 1) {
            newVehicle = new Car(parkingLot.getCount() + 1);
        } else if (choice == 2) {
            newVehicle = new Bus(parkingLot.getCount() + 1);
        } else {
            newVehicle = new Motorbike(parkingLot.getCount() + 1);
        }

        parkingLot.parkVehicle(newVehicle);
    }

    int maxParkingDuration = 15; // in seconds
    int overstayingCount = parkingLot.countOverstayingVehicles(maxParkingDuration);

    std::cout << "Number of overstaying vehicles: " << overstayingCount << std::endl;

    return 0;
}
