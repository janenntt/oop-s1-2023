#include "AirVehicle.h"
#include "Helicopter.h"
#include <string>
using namespace std;
Helicopter::Helicopter(int w, string n): AirVehicle(w){
    this->name = n;

};

string Helicopter::get_name(){
    return this->name ;
};
void Helicopter::set_name(string n){
    this->name=n;
};
 void Helicopter::fly(int headwind, int minutes){
float fuel;
if(headwind >=40 ){
    fuel = 0.4;
}else{
    fuel = 0.18;
}
if(this->get_weight() -5670 >0 ){
    fuel += 0.01*(this->get_weight()-5670);
}

float fuelUse = fuel*minutes;
float fuelLeft = this->get_fuel() - fuelUse;
if(fuelLeft > 20){
this->numberOfFlights ++;
this->set_fuel(fuelLeft);
}
 }