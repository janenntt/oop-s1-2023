#ifndef TV_H
#define TV_H

class TV : public Appliance {
    public:
        TV();
        TV(int powerRating, double screenSize);

        double screenSize;

        void setScreenSize(double screenSize);
        double getScreenSize() const ;

        double getPowerConsumption();
};

#endif