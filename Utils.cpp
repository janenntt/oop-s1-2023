#include "Utils.h"

std::tuple <int,int> Utils::generateRandomPos(int gridWidth, int gridHeight){
    int x = std::rand();
    int y = std::rand();
    return std::make_tuple(x,y);
    
}

double Utils::calculateDistance (std::tuple <int,int> pos1, std::tuple <int,int> pos2){
    int x1,x2,y1,y2;
    pos1 = std::make_tuple(x1,y1);
    pos2 = std::make_tuple(x2,y2);
    int distance = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    return distance;
}