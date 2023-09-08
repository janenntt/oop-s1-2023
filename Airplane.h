#ifndef AIRPLANE_H
#define AIRPLANE_H
#include "AirVehicle.h"

class Airplane:public AirVehicle{
    public:
        Airplane();
        Airplane(int weight, int numPassengers);

        int numPassengers; // numbers of passengers on the plane

        void reducePassengers(int x); //reduce passenger list by x
        int get_numPassengers();

        void fly(int headwind, int minutes);

};

#endif
