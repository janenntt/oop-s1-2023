#include <tuple>
#ifndef GAMEENTITY_H
#define GAMEENTITY_H

class GameEntity{
    private:
        std::tuple<int,int> position; // representing the position of the entity
        char type; // representing the type of the entity

    public:
        GameEntity(int x, int y, char type); // constructor
        std::tuple<int,int> getPos(); // returns the position of the entity
        char getType(); // returns the type of the entity
        
};
#endif