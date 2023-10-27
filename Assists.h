#ifndef ASSISTS_H
#define ASSISTS_H
#include <tuple>
#include "math.h"
using namespace std;
class Assists{
    public:
    static std::tuple<int, int> createRandomLoc(int matrixWidth, int matrixHeight){
        int x = rand() % (matrixWidth);
        int y = rand() % (matrixHeight);
        tuple<int, int> a = make_tuple(x, y);
        return a;
    }
    static double evaluateDistance(std::tuple<int, int> loc1, std::tuple<int, int> loc2) {
    int x1, y1, x2, y2;
    std::tie(x1, y1) = loc1;
    std::tie(x2, y2) = loc2;
    return std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
}
};
#endif
