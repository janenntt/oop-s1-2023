#include "Car.h"

Car::Car(int ID): Vehicle(ID){}


int Car::getParkingDuration(){
    return int(Vehicle::getParkingDuration()*0.9);
}
