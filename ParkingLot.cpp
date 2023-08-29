#include <iostream>
#include "ParkingLot.h"
#include "Vehicle.h"

ParkingLot::ParkingLot(): vehicle_count(0), max_capacity(0), vehicles(nullptr){}
ParkingLot::ParkingLot(int capacity): vehicle_count(0), max_capacity(capacity){
    vehicles = new Vehicle*[max_capacity];
}

ParkingLot::~ParkingLot(){
    if( int i=0; i<vehicle_count; i++){
        delete vehicles[i];
    }   
    delete[] vehicles;
}

int ParkingLot::getCount() const {
    return vehicle_count;
}

void ParkingLot::parkVehicle(Vehicle* vehicle){
    if(vehicle_count < max_capacity){
        vehicles[vehicle_count] = vehicle;
        vehicle_count++;
    } else {
        std::cout << "The lot is full" << std::endl;
    }
}

void ParkingLot::unparkVehicle(int vehicle_ID){
    for ( int i=0; i<vehicle_count; i++){
        if(vehicles[i]->get_ID()== vehicle_ID){
            delete vehicles[i];
            vehicles[i] = vehicles[vehicle_count - 1];
            vehicle_count--;
            std::cout << "Vehicle with ID: " << vehicle_ID << " has been unparked" << std::endl;
        } else {
             std::cout << "Vehicle not in the lot" << std::endl;
        }
    }
    
        
    

}

