#ifndef GAME_H
#define GAME_H
#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"
#include "Explosion.h"
#include "Ship.h"
#include "Mine.h"
#include <vector>

class Game {
    private:
        std::vector<GameEntity*> entities;
    public:
        std::vector<GameEntity*> get_entities();
        void set_entities(std::vector<GameEntity*> entities);
        std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight);
        void gameLoop(int maxIterations, double mineDistanceThreshold);

};
#endif