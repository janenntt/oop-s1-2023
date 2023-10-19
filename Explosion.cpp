#include "Explosion.h"

Explosion::Explosion(int x, int y) : GameEntity(x,y,'E'){}

void Explosion::apply(GameEntity& entity){
    entity.setPosition(std::make_tuple(-1,-1));
    entity.setType('X');
}
