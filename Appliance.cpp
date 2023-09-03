#include <iostream>
#include "Appliance.h"

Appliance::Appliance() : powerRating(0), isOn(false){}
Appliance::Appliance(int powerRating): powerRating(powerRating), isOn(false) {}


int Appliance::set_powerRating() const {
    return powerRating;
}

bool Appliance::get_isOn(){
    return isOn;
}

void Appliance::turnOn(){
    isOn = true;
}

void Appliance::turnOff(){
    isOn = false;
}

double Appliance::getPowerConsumption(){

    return 0.0;
}
