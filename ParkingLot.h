#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"

class ParkingLot {
private:
    int maxCapacity;
    int vehicleCount;
    Vehicle** vehicles;

public:
    ParkingLot(int capacity);
    ~ParkingLot();
    int getCount() const;
    void parkVehicle(Vehicle* vehicle);
    void unparkVehicle(int vehicleID);
    int countOverstayingVehicles(int maxParkingDuration) const;
};

#endif // PARKINGLOT_H
