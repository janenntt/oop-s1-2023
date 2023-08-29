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

int ParkingLot::getCount() const {
    return vehicleCount;
}

void ParkingLot::parkVehicle(Vehicle* vehicle) {
    if (vehicleCount < maxCapacity) {
        vehicles[vehicleCount] = vehicle;
        vehicleCount++;
        std::cout << "Vehicle parked. Current count: " << vehicleCount << std::endl;
    } else {
        std::cout << "The lot is full." << std::endl;
    }
}

void ParkingLot::unparkVehicle(int vehicleID) {
    for (int i = 0; i < vehicleCount; ++i) {
        if (vehicles[i]->get_ID() == ID) {
            delete vehicles[i];
            vehicles[i] = vehicles[vehicleCount - 1];
            --vehicleCount;
            std::cout << "Vehicle with ID " << ID << " has been unparked." << std::endl;
            return;
        } else {
            std::cout << "Vehicle not in the lot." << std::endl;
        }
    }
    
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration) const {
    int overstayingCount = 0;
    std::time_t currentTime = std::time(nullptr);

    for (int i = 0; i < vehicleCount; ++i) {
        if (vehicles[i]->getParkingDuration() > maxParkingDuration) {
            overstayingCount++;
        }
    }

    return overstayingCount;
}
