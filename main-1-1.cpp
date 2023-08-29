#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
using namespace std;

int main(){
    int num_cars, num_buses, num_motorbikes;
    cout << "Number of cars:  " << endl;
    cin >> num_cars;
    cout << "Number of buses: " << endl;
    cin >> num_buses;
    cout << "Number of motorbikes: " << endl;
    cin >> num_motorbikes;

    int total_vehicles = num_cars + num_buses + num_motorbikes;
    Vehicle* vehicles[total_vehicles];

    for(int i=0;i<num_cars;i++){
        vehicles[i]=new Car(i+1);
    }

    for(int i=0;i<num_buses;i++){
        vehicles[num_cars+i]=new Bus(i+1);
    }

    for(int i=0;i<num_motorbikes;i++){
        vehicles[num_cars+num_buses+i]=new Motorbike(i+1);
    }

    for (int i=0;i<total_vehicles;i++){
        cout << "Vehicle: " << vehicles[i]->get_ID() << endl;
        cout << "Parking duration: " << vehicles[i]->getParkingDuration() << " seconds" << endl;

        delete vehicles[i];
    }



    return 0;
}