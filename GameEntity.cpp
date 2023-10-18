#include "GameEntity.h"

GameEntity::GameEntity(int x, int y, char type): position(std::make_tuple(x,y)), type(type) {}

std::tuple<int,int> GameEntity::getPos(){
    return this->position;
}

char GameEntity::getType(){
    return this->type;
}