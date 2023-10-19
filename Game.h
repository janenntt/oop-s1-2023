#ifndef GAME_H
#define GAME_H

#include "GameEntity.h"
#include "Ship.h"
#include "Mine.h"
#include <vector>

class Game {
private:
    std::vector<GameEntity*> entities;

public:
    std::vector<GameEntity*> getEntities();
    void setEntities(std::vector<GameEntity*> newEntities);
    std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight);
    void gameLoop(int maxIterations, double mineDistanceThreshold);
};

#endif
