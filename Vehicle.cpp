#include "Vehicle.h"


Vehicle::Vehicle(): timeOfEntry(0), ID(0){}
Vehicle::Vehicle(int ID): ID(ID){
    timeOfEntry = std::time(nullptr);
}

int Vehicle::get_ID() const {
    return ID;
}

int Vehicle::getParkingDuration() const {
    std::time_t current_time = std::time(nullptr);
    return static_cast<int> (std::difftime(current_time, timeOfEntry));
}



