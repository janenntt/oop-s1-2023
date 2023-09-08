#include "Airplane.h"
#include "AirVehicle.h"

Airplane::Airplane(): AirVehicle(){};
Airplane::Airplane(int w, int p): AirVehicle(w){
    this->numPassengers = p;
};

int Airplane::get_numPassengers(){
    return this->numPassengers;
};
void Airplane::reducePassengers(int x){
    
    if ( this->get_numPassengers() - x> 0 )
    {
        this->numPassengers -= x;
    }else{
        this->numPassengers = 0;
    }
    
};

void Airplane::fly(int headwind, int minutes){
    int fuel2 = fuel;
    if(headwind<60){
        fuel2 -= (0.25*minutes + 0.001*numPassengers*minutes);
    } else {
        fuel2 -= (0.5*minutes + 0.001*numPassengers*minutes);
    }

    if(fuel2 < 0.2*fuel){
        numberOfFlights = numberOfFlights;
        fuel = fuel2;
    } else {
        numberOfFlights += 1;
        fuel = fuel2;
    }
}