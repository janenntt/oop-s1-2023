#include "ParkingLot.h"
#include <iostream>

ParkingLot::ParkingLot(int capacity) : maxCapacity(capacity), vehicleCount(0) {
    vehicles = new Vehicle*[maxCapacity];
}

ParkingLot::~ParkingLot() {
    for (int i = 0; i < vehicleCount; ++i) {
        delete vehicles[i];
    }
    delete[] vehicles;
}

int ParkingLot::getCount(){
    return vehicleCount;
}

void ParkingLot::parkVehicle(Vehicle* vehicle) {
    if (vehicleCount < maxCapacity) {
        vehicles[vehicleCount] = vehicle; //check
        vehicleCount++;
    } else {
        std::cout << "The lot is full" << std::endl;
    }
}

void ParkingLot::unparkVehicle(int unparked_ID) {
    for (int i = 0; i < vehicleCount; ++i) {
        if (vehicles[i]->get_ID() == unparked_ID) {
            delete vehicles[i];
            vehicles[i] = vehicles[i+1];
            vehicleCount--;
            return;
        } else {
            std::cout << "Vehicle not in the lot." << std::endl;
        }
    }
    
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration){
    int overstayingCount = 0;
    std::time_t currentTime = std::time(nullptr);

    for (int i = 0; i < vehicleCount; ++i) {
        if (vehicles[i]->getParkingDuration() > maxParkingDuration) {
            overstayingCount++;
        }
    }
    return overstayingCount;
}
