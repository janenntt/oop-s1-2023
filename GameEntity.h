#ifndef GAMEENTITY_H
#define GAMEENTITY_H
#include <tuple>
using namespace std;

class GameEntity{
    private:
        std::tuple<int,int> position; // position of entity
        char type; // type of entity
    public:
        GameEntity(int x, int y, char type):position(std::make_tuple(x,y)),type(type){}
        std::tuple<int,int> getPos(){
            return position;
        }
        
        void setPos(int x, int y){
            position = std::make_tuple(x,y);
        }

        char getType(){
            return type;
        }

        void setType(char new_type){
            type = new_type;
        }
};
#endif