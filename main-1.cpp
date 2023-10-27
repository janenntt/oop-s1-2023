#include <iostream>
#include "GameEntity.h"
#include "Utils.h"

int main(){
    // Generate random positions
    Utils p1,p2;
    std::tuple <int,int> pos1 = p1.generateRandomPos(10,10);
    std::tuple <int,int> pos2 = p2.generateRandomPos(5,20);

    // Calculate the distance
    double distance = p1.calculateDistance(pos1,pos2);

    // Print
    std::cout << "Position 1: (" << std::get<0>(pos1) << ", " << std::get<1>(pos1) << ")\n" << std::endl;
    std::cout << "Position 2: (" << std::get<0>(pos2) << ", " << std::get<1>(pos2) << ")\n" << std::endl;

    return 0;
}