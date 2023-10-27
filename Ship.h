#ifndef SHIP_H
#define SHIP_H
#include "GameEntity.h"
#include <tuple>

class Ship : public GameEntity {
    private:
    public:
        Ship(int x, int y): GameEntity(x,y,'S'){}
        
        void move(int dx, int dy){
            int currentX, currentY;
            std::tie(currentX, currentY) = getPos();
            setPos(currentX + dx, currentY + dy);
        }

};
#endif