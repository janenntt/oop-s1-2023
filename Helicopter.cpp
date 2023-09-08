#include "AirVehicle.h"
#include "Helicopter.h"
#include <iostream>
#include <string>
Helicopter::Helicopter(int weight, string name) : weight(weight), name(name){}

string Helicopter::get_name() const{
    return name;
}

void Helicopter::set_name(string new_name){
    name = new_name;
}

void Helicopter::fly(int headwind, int minutes){
    int fuel1 = fuel;
    if(weight > 5670){
        if(headwind<40){
            fuel1 -= (0.18*minutes + 0.01*(weight-5670)*minutes);
        } else {
            fuel1 -= (0.4*minutes + 0.01*(weight-5670)*minutes);
        }
    } else {
        if(headwind<40){
            fuel1 -= 0.18*minutes;
        } else {
            fuel1 -= 0.4*minutes;
        }
    }

    if(fuel1 < 0.2*fuel){
        numberOfFlights = numberOfFlights;
        fuel = fuel1;
    } else {
        numberOfFlights += 1;
        fuel = fuel1;
    }
}