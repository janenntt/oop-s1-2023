#ifndef AIRPLANE_H
#define AIRPLANE_H
#include <iostream>
#include "AirVehicle.h"
#include <string> 
using namespace std;
class Airplane: public AirVehicle{
    public: 
    int numPassengers;
    Airplane(); 
    Airplane(int w, int p); 
    int get_numPassengers(); 
    void reducePassengers(int x); 
    void fly(int headwind, int minutes); 


};
#endif