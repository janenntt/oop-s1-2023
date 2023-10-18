#ifndef SHIP_H
#define SHIP_H
#include "GameEntity.h"

class Ship : public GameEntity {
    public:
        void move(int dx, int dy);
        Ship(int x, int y, 'S');
};
#endif