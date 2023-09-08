#include <iostream>
#include "Fleet.h"
Fleet::Fleet(){
        Tesla a('S', 10000); 
        Ford b (1,2000); 
        Car c(30000); 
        Ford d (2, 40000);
        Tesla e('T', 50000); 
        fleet[0] = &a;
        fleet[1] = &b;  
        fleet[2] = &c;  
        fleet[3] = &d;  
        fleet[4] = &e;  
    }; 
Car ** Fleet::get_fleet(){
        return this->fleet; 
};