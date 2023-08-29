#include "Motorbike.h"

Motorbike::Motorbike(int ID): Vehicle(ID){}

int Motorbike::getParkingDuration() const {
    return int(Vehicle::getParkingDuration()*0.85);
}