#include "AirVehicle.h"
#include "Airplane.h"
#include "Helicopter.h"
#include "AirFleet.h"
#include <string>
using namespace std;

AirFleet::AirFleet()
{
    fleet = new AirVehicle *[5];
    Airplane a = Airplane(20,10);
    fleet[0] = &a;
    Helicopter b = Helicopter(10000, "BlackHawk");
    fleet[1] =  &b;
    AirVehicle c = AirVehicle(5000); 
    fleet[2] = &c ;
    Helicopter d =  Helicopter(100, "WhiteHawk");
    fleet[3] = &d;
    Airplane e = Airplane(15, 20);
    fleet[4] = &e ;
};

AirVehicle **AirFleet::get_fleet(){
    return this->fleet;
};  