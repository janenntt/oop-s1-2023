#ifndef HELICOPTER_H
#define HELICOPTER_H
#include <iostream>
#include "AirVehicle.h"
#include <string> 
using namespace std;
class Helicopter: public AirVehicle{
    public: 
    string name;
    Helicopter(); 
    Helicopter(int w, string n); 
    string get_name(); 
    void set_name(string n); 
    void fly(int headwind, int minutes); 

};
#endif