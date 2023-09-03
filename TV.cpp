#include <iostream>
#include "Appliance.h"
#include "TV.h"

TV::TV() : screenSize(0.0){}
TV::TV(int powerRating, double screenSize) : Appliance(powerRating), screenSize(screenSize){};

double TV::getScreenSize() const {
    return screenSize;
}

void TV::setScreenSize(double new_screenSize){
    screenSize = new_screenSize;
}


double TV::getPowerConsumption(){
    return powerRating * (screenSize/10);
}
