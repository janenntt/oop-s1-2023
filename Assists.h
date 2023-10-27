#ifndef ASSISTS_H
#define ASSISTS_H
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <tuple>

class Assists {
public:
    std::tuple<int, int> createRandomLoc(int matrixWidth, int matrixHeight) {
        static bool seeded = false; // Only seed the random number generator once
    if (!seeded) {
        std::srand(static_cast<unsigned int>(std::time(nullptr)));
        seeded = true;
    }
    int x = std::rand() % matrixWidth;
    int y = std::rand() % matrixHeight;
    return std::make_tuple(x, y);
}

double evaluateDistance(std::tuple<int, int> loc1, std::tuple<int, int> loc2) {
    int x1, y1, x2, y2;
    std::tie(x1, y1) = loc1;
    std::tie(x2, y2) = loc2;
    return std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
}
};


#endif