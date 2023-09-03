#include <iostream>
#include "Appliance.h"
#include "TV.h"

TV::TV() : screenSize(0.0){}
TV::TV(int powerRating, double screenSize) : Appliance(powerRating), screenSize(screenSize){};

double TV::get_ScreenSize() const {
    screenSize = new_screenSize;
}

void TV::set_ScreenSize(double screenSize){

}


double TV::getPowerConsumption(){
    return powerRating * (screenSize/10);
}
