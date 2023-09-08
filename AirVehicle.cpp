#include  "AirVehicle.h"    
AirVehicle::AirVehicle(){
    this->numberOfFlights = 0; 
    this->fuel = 100; 
}; 
AirVehicle::AirVehicle(int w){
    this->numberOfFlights = 0; 
    this->fuel = 100; 
    this->weight = w; 
}; 
int AirVehicle::get_weight(){
    return weight; 
}; 
void AirVehicle::set_weight(int w){
    this->weight = w; 
};
float AirVehicle::get_fuel(){
    return this->fuel; 
}; 
void AirVehicle::set_fuel(float f){
    this->fuel = f; 
}; 
void AirVehicle::refuel(){
    this->fuel = 100.0; 
}; 
int AirVehicle::get_numberOfFlights(){
    return this->numberOfFlights; 
};
void AirVehicle::fly(int headwind, int minutes){
    this->numberOfFlights +=1; 
};  
void AirVehicle::set_numberOfFlights(int k){
    this->numberOfFlights = k; 
}