#include "AirVehicle.h"

AirVehicle::AirVehicle() : weight(0){}
AirVehicle::AirVehicle(int w) : weight(w){}

int AirVehicle::get_weight() const{
    return weight;
}

void AirVehicle::set_weight(int new_weight){
    weight = new_weight;
}

float AirVehicle::get_fuel() const{
    return fuel;
}

void AirVehicle::set_fuel(float new_fuel){
    fuel = new_fuel;
}

int AirVehicle::get_numberOfFlights()const{
    return numberOfFlights;
}

void AirVehicle::set_numberOfFlights(int new_numberOfFlights){
    numberOfFlights = new_numberOfFlights;
}

void AirVehicle::refuel(){
    fuel = 100.0;
}

void AirVehicle::fly(int headwind, int minutes){
    numberOfFlights += 1;
}   