#ifndef SPOT_H
#define SPOT_H
#include <tuple>

class Spot{
    private:
        std::tuple<int,int> location;
        char category;
    public:
        Spot(int x, int y, char category): location(std::make_tuple(x,y)), category(category){}
        std::tuple <int,int> getLoc(){
            return location;
        }
        char getCategory(){
            return category;
        }
        void setLoc(int x, int y){
            location = std::make_tuple(x,y);
        }
        void setCategory(char _category){
            category = _category;
        }

};
#endif