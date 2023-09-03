#ifndef HOUSE_H
#define HOUSE_H
#include "Appliance.h"
class House{
    public:
        House (); //creates an empty House object
        House (int numAppliances); //creates a House object with space for numAppliances 
        ~ House();

        bool addAppliance(Appliance* appliance); // adds an Appliance object to the House
                                                // return true if there is space in the house otherwise false
        double getTotalPowerConsumption() const ;

    private:
        Appliance** appliances;
        int numAppliances;
        int capacity;
}; 

#endif