#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include "Vehicle.h"

class ParkingLot{
    private:
        int vehicle_count;
        int max_capacity;
        Vehicle** vehicles;

    public:
        ParkingLot();
        ParkingLot(int capacity);
        ~ParkingLot();
        
        int getCount() const; //return the current number of vehicles in the lot
        void parkVehicle(Vehicle* vehicle);
        void unparkVehicle(int vehicle_ID); // represent the ID of the vehicle to be removed from the parking lot


};

#endif