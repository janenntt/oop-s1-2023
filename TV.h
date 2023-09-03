#ifndef TV_H
#define TV_H

#include "Appliance.h"

class TV : public Appliance {
    public:
        TV();
        TV(int powerRating, double screenSize);

        double screenSize;

        double getScreenSize() const ;
        void setScreenSize(double new_screenSize);

        double getPowerConsumption();
};

#endif