#include "AirVehicle.h"
#include "Helicopter.h"
#include "Airplane.h"
#include "AirFleet.h"

AirFleet::AirFleet(){
    Airplane a(20,10);
    Helicopter b(10000, "BlackHawk");
    AirVehicle c(5000);
    Helicopter d(100, "WhiteHawk");
    Airplane e(15,20);
    fleet[0] = &a;
    fleet[1] = &b;
    fleet[2] = &c;
    fleet[3] = &d;
    fleet[4] = &e;
}
AirVehicle ** AirFleet::get_fleet(){
        return this->fleet; 
}