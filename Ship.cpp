#include "Ship.h"

Ship::Ship(int x, int y): GameEntity(x,y,'S'){}

void Ship::move(int dx, int dy){
    std::tuple <int,int> currentPos = getPos();
    int current_x, current_y;
    std::tie(current_x,current_y) = currentPos;
    int new_x = current_x + dx;
    int new_y = current_y + dy;
    setPosition(std::make_tuple(new_x,new_y));
}

