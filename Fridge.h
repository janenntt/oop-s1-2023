#ifndef FRIDGE_H
#define FRIDGE_H

class Fridge : public Appliance {
    private:
        double volume; //volume in litres

    public:
        Fridge();
        Fridge(int powerRating, double volume);


        double getVolume() const ;
        void setVolume(double volume);
        

        double getPowerConsumption();
};

#endif