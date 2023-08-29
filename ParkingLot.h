#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include "Vehicle.h"

class ParkingLot {
public:
    int maxCapacity;
    int vehicleCount;
    Vehicle** vehicles; // dynamic array of pointers to Vehicle objects


    ParkingLot(int capacity);
    ~ParkingLot();
    int getCount();
    
    // method to park a vehicle in a lot
    // take a pointer to a Vehicle object - attempt to park it in the lot if there is space 
    void parkVehicle(Vehicle* vehicle); 
    
    // remove vehicle from parking lot
    // search for the vehicle with corresponding ID in the vehicles array and remove it from the lot
    // free up space
    void unparkVehicle(int ID); 
    int countOverstayingVehicles(int maxParkingDuration);
};

#endif // PARKINGLOT_H
