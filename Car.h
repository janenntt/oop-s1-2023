#ifndef CAR_H
#define CAR_H

class Car{
    public:
        int price;
        int emissions;

        Car();
        Car(int price);
        
        int get_price() const;
        void set_price(int new_price);
        int get_emissions() const;
        void set_emissions(int new_emissions);
        virtual void drive(int kms);
};

#endif