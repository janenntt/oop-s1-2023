#include "Mine.h"

Mine::Mine(int x, int y) : GameEntity(x,y,'M'){}

Explosion Mine::explode(){
    setType('X');
}
