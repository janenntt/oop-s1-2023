#include "Game.h"
#include <iostream>

int main() {
    Game game;
    int numShips = 3;
    int numMines = 3;
    int gridWidth = 100;
    int gridHeight = 100;
    int maxIterations = 10;
    double mineDistanceThreshold = 10.0;

    std::vector<GameEntity*> entities = game.initGame(numShips, numMines, gridWidth, gridHeight);

    std::cout << "Initial Entities:" << std::endl;
    for (GameEntity* entity : entities) {
        std::cout << "Type: " << entity->getType() << " Position: (" << std::get<0>(entity->getPos()) << ", " << std::get<1>(entity->getPos()) << ")" << std::endl;
    }

    game.gameLoop(maxIterations, mineDistanceThreshold);

    std::cout << "\nEntities after Game Loop:" << std::endl;
    for (GameEntity* entity : entities) {
        std::cout << "Type: " << entity->getType() << " Position: (" << std::get<0>(entity->getPos()) << ", " << std::get<1>(entity->getPos()) << ")" << std::endl;
    }

    // Clean up allocated memory
    for (GameEntity* entity : entities) {
        delete entity;
    }

    return 0;
}
