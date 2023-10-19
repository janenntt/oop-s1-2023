#include "GameEntity.h"

GameEntity::GameEntity(int x, int y, char type): position(std::make_tuple(x,y)), type(type) {}

std::tuple<int,int> GameEntity::getPos(){
    return position;
}

void GameEntity::setPosition(std::tuple <int,int> position){
    this -> position = position;
}

char GameEntity::getType(){
    return type;
}

void GameEntity::setType(char type){
    this -> type = type;
}
