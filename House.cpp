#include <iostream>
#include "House.h"
#include "Appliance.h"


House::House() : numAppliances(0),appliances(nullptr),capacity(0){}
House::House(int numAppliances) : numAppliances(0),capacity(numAppliances){
    appliances = new Appliance*[capacity];
    for(int i=0;i<capacity;i++){
        appliances[i]=nullptr;
    }
}
House::~House(){
    for (int i=0;i<numAppliances;i++){
        delete appliances[i];
    }
    delete [] appliances;
}
bool House::addAppliance(Appliance* appliance){
    if(numAppliances < capacity){
        appliances[numAppliances++]=appliance;
        return true;
    }
    return false;
}

double House::getTotalPowerConsumption() const {
    double totalPowerConsumption = 0.0;
    for (int i=0; i<numAppliances;i++){
        totalPowerConsumption += appliances[i]->getPowerConsumption();
    }
    return totalPowerConsumption;
}

