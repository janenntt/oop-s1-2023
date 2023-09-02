#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance{
    private:
        int powerRating;
        bool isOn;
    
    public:
        Appliance(); //set the power rating to 0 and isOn attribute to false
        Appliance(int powerRating); //creates an Appliance with a power rating

        
        int get_powerRating() const;
        bool isTurnedOn();

        void turnOn();
        void turnOff();
        virtual double getPowerConsumption();

};

#endif