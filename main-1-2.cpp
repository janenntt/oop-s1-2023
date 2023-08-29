#include <iostream>
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    ParkingLot parkingLot(10);

    while (true) {
        int choice;
        std::cout << "Enter vehicle type (1 for Car, 2 for Bus, 3 for Motorbike): ";
        std::cin >> choice;

        if (choice < 1 || choice > 3) {
            std::cout << "Invalid choice. Exiting." << std::endl;
            break;
        }

        Vehicle* newVehicle;

        if (choice == 1) {
            newVehicle = new Car(parkingLot.getCount() + 1);
        } else if (choice == 2) {
            newVehicle = new Bus(parkingLot.getCount() + 1);
        } else {
            newVehicle = new Motorbike(parkingLot.getCount() + 1);
        }

        parkingLot.parkVehicle(newVehicle);
        std::cout << "Vehicle parked. Current count: " << parkingLot.getCount() << "/" << parkingLot.getCount() << std::endl;

        if (parkingLot.getCount() == parkingLot.getCount()) {
            std::cout << "Parking lot is full." << std::endl;
            break;
        }
    }

    int unparkID;
    std::cout << "Enter ID of vehicle to unpark: ";
    std::cin >> unparkID;

    parkingLot.unparkVehicle(unparkID);

    return 0;
}
