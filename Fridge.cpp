#include <iostream>
#include "Appliance.h"
#include "Fridge.h"

Fridge::Fridge() : volume(0.0){}
Fridge::Fridge(int powerRating, double volume) : Appliance(powerRating), volume(volume){}


double Fridge::getVolume() const {
    return volume;
}

void Fridge::setVolume(double new_volume){
    volume = new_volume;
}

double Fridge::getPowerConsumption(){
    double powerConsumption = powerRating * 24 * (volume/100);
    return powerConsumption;
}

