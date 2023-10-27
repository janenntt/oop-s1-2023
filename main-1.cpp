#include <iostream>
#include "Spot.h"
#include "Assists.h"

int main(){
    Assists p1,p2;
    std::tuple <int,int> loc1 = p1.createRandomLoc(10,10);
    std::tuple <int,int> loc2 = p2.createRandomLoc(5,20);

    // Calculate the distance
    double distance = p1.evaluateDistance(loc1,loc2);

    // Print
    std::cout << "Location 1: (" << std::get<0>(loc1) << ", " << std::get<1>(loc1) << ")\n" << std::endl;
    std::cout << "Location 2: (" << std::get<0>(loc2) << ", " << std::get<1>(loc2) << ")\n" << std::endl;

    return 0;
}