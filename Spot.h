#ifndef SPOT_H
#define SPOT_H
#include <iostream>
#include <tuple>
using namespace std;
class Spot{
    public:
    std::tuple<int, int> location;
    char category;

    Spot(int x, int y, char category):category(category){
        location = make_tuple(x, y);
    }

    std::tuple<int, int> getLoc(){
        return location;
    }
    char getCategory(){
        return category;
    }
    void setLoc(int x, int y){
        get<0>(location) = x;
        get<1>(location) = y;
    }
    void setCategory(char _category){
        category = _category;
    }

};
#endif