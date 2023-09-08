 #include "Airplane.h"  
Airplane::Airplane(){}; 
Airplane::Airplane(int w, int p){
    this->weight = w; 
    this->numPassengers = p; 
}
int Airplane::get_numPassengers(){
    return this->numPassengers; 
}; 
void Airplane::reducePassengers(int x){
    this->numberOfFlights = 0;
    this->fuel = 100; 
    this->numPassengers -= x; 
    if (this->numPassengers < 0){
        this->numPassengers = 0; 
    }
}; 
void Airplane::fly(int headwind, int minutes){
    if (headwind >= 60){
        this->fuel -= 0.5*minutes; 
    } 
        this->fuel -= 0.25*minutes; 
    this->fuel -= this->numPassengers*0.001*minutes; 
    if(this->fuel >=20){
    this->numberOfFlights += 1;
    }

}; 