#include "Car.h"

Car::Car(): price(0){}
Car::Car(int price): price(price), emissions(0){}

int Car:: get_price() const{
    return price;
}

void Car::set_price(int new_price){
    price = new_price;
}

int Car::get_emissions() const{
    return emissions;
}

void Car::set_emissions(int new_emissions){
    emissions = new_emissions;
}

void Car::drive(int kms){
    emissions += 20*kms;
}

