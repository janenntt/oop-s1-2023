#ifndef TV_H
#define TV_H

#include "Appliance.h"

class TV : public Appliance {
    public:
        TV();
        TV(int powerRating, double screenSize);

        double screenSize;

        double get_ScreenSize() const ;
        void set_ScreenSize(double new_screenSize);

        double getPowerConsumption();
};

#endif