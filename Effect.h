#ifndef EFFECT_H
#define EFFECT_H
#include "GameEntity.h"

class Effect {
    public:
        virtual void apply(GameEntity& entity); // accepts a GameEntity object as input and applies the effect to the entity. This function is pure virtual and needs to be implemented in derived classes
};
#endif