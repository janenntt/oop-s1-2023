#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H

class AirVehicle{
    public:
        AirVehicle();
        AirVehicle(int w); 

        int weight;
        float fuel;
        int numberOfFlights;

        int get_weight() const;
        void set_weight(int w);

        float get_fuel() const;
        void set_fuel(float new_fuel);

        int get_numberOfFlights() const;
        void set_numberOfFlights(int new_numberOfFlights);

        void refuel();
        virtual void fly(int headwind,int minutes); //headwind in km/h and minutes (time flying)
};

#endif