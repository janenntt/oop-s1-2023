#ifndef UTILS_H
#define UTILS_H
#include <tuple>
#include <cstdlib.h>
#include <cmath>

class Utils {
    public:
        // returns a random position within a grid represented by gridWidth and gridHeight as a std::tuple<int,int>
        static std::tuple <int,int> generateRandomPos(int gridWidth, int gridHeight);
        
        // returns the Euclidean distance between two positions given as pos1 and pos2 as a double
        static double calculateDistance (std::tuple <int,int> pos1, std::tuple <int,int> pos2);
};
#endif