#ifndef FORD_H
#define FORD_H

#include "Car.h"

class Ford : public Car {
private:
    int badgeNumber;
    float litresOfFuel;

public:
    Ford();
    Ford(int badgeNumber, int price);

    void refuel(int litres);
    void drive(int kms);

    int get_badgeNumber() const;
    void set_badgeNumber(int new_badgeNumber);

    float get_litresOfFuel() const;
    void set_litresOfFuel(float new_litres);
};

#endif 
