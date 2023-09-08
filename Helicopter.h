#ifndef HELICOPTER_H
#define HELICOPTER_H
#include "AirVehicle.h"
#include <string>

class Helicopter:public AirVehicle{
    public:
        Helicopter(int weight, string name); //create a helicopter with weight w and string n

        string name;
        void fly (int headwind, int minutes);

        string get_name() const;

        void set_name(string new_name);

};

#endif