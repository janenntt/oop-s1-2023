#include "Tesla.h"

Tesla::Tesla() : model(' '), batteryPercentage(100.0) {}

Tesla::Tesla(char model, int price) : model(model), batteryPercentage(100.0) {}

void Tesla::chargeBattery(int mins) {
    batteryPercentage += 0.5 * mins;
    if (batteryPercentage > 100.0) {
        batteryPercentage = 100.0;
    } 
}

void Tesla::drive(int kms) {
    emissions = 74 * kms;
    batteryPercentage -= 1*(kms/5);
    if (batteryPercentage < 0) {
        batteryPercentage = 0;
    }
}

char Tesla::get_model() const {
    return model;
}

float Tesla::get_batteryPercentage(){
    return batteryPercentage;
}

void Tesla::set_model(char new_model) {
    model = new_model;
}

void Tesla::set_batteryPercentage(float new_batteryPercentage) {
    batteryPercentage = new_batteryPercentage;
}
