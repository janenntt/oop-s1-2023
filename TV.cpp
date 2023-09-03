#include <iostream>
#include "Appliance.h"
#include "TV.h"

TV::TV() : screenSize(0){}
TV::TV(int powerRating, double screenSize) : Appliance(powerRating), screenSize(screenSize){};


void TV::setScreenSize(double screenSize){

}

double TV::getScreenSize() const {
    return screenSize;
}

double TV::getPowerConsumption(){
    double powerConsumption = powerRating * (screenSize/10);
    return powerConsumption;
}
