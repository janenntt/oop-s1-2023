#include <iostream>
#include "Appliance.h"

Appliance::Appliance() : powerRating(0), isOn(false){}
Appliance::Appliance(int powerRating): powerRating(powerRating), isOn(false) {}

int Appliance::get_powerRating() const {
    return powerRating;
}
void Appliance::set_powerRating(int new_powerRating){
    powerRating = new_powerRating;
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
