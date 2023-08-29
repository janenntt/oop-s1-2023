#include "Motorbike.h"

Motorbike::Motorbike(int ID): Vehicle(ID){}

int Motorbike::getParkingDuration(){
    return int(Vehicle::getParkingDuration()*0.85);
}