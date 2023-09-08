#include "AirVehicle.h"

AirVehicle::AirVehicle() : weight(0){}
AirVehicle::AirVehicle(int weight) : weight(weight){}

int AirVehicle::get_weight() const{
    return weight;
}

void AirVehicle::set_weight(int w){
    weight = w;
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