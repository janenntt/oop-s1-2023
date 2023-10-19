#include "Utils.h"

std::tuple <int,int> Utils::generateRandomPos(int gridWidth, int gridHeight){
    int x = std::rand() % gridWidth;
    int y = std::rand() % gridHeight;
    return std::make_tuple(x,y);
}

double Utils::calculateDistance (std::tuple <int,int> pos1, std::tuple <int,int> pos2){
    int x1, y1, x2, y2;
    std::tie(x1, y1) = pos1;
    std::tie(x2, y2) = pos2;
    double dx = x1 - x2;
    double dy = y1 - y2;
    return std::sqrt(dx * dx + dy * dy);
}