#ifndef EXPLOSION_H
#define EXPLOSION_H
#include "GameEntity.h"
#include "Effect.h"

class Explosion : public GameEntity, public Effect {
    public:
        Explosion(int x, int y, char 'E');
        void apply(GameEntity& entity); // modify a GameEntity obj, set the position to (-1,1), type to X
};
#endif