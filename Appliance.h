#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance{
    protected:
        int powerRating;
        bool isOn;
    
    public:
        Appliance(); //set the power rating to 0 and isOn attribute to false
        Appliance(int powerRating); //creates an Appliance with a power rating

        int get_powerRating() const;
        void set_powerRating(int new_powerRating);
        bool get_isOn();
        

        void turnOn();
        void turnOff();
        virtual double getPowerConsumption();

};

#endif