#include "Bus.h"

Bus::Bus(int ID): Vehicle(ID){
    timeOfEntry = std::time(nullptr);
}

int Bus::getParkingDuration() const {
    return int(Vehicle::getParkingDuration()*0.75);
}