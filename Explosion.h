#ifndef EXPLOSION_H
#define EXPLOSION_H
#include "GameEntity.h"
#include "Effect.h"

class Explosion : public GameEntity, public Effect {
    public:
        Explosion(int x, int y);
        void apply(GameEntity& entity) override; // modify a GameEntity obj, set the position to (-1,1), type to X
};
#endif
