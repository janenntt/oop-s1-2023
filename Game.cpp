#include "Game.h"
#include "Utils.h"

std::vector<GameEntity*> Game::getEntities() {
    return entities;
}

void Game::setEntities(std::vector<GameEntity*> newEntities) {
    entities = newEntities;
}

std::vector<GameEntity*> Game::initGame(int numShips, int numMines, int gridWidth, int gridHeight) {
    entities.clear(); // Clear any existing entities
    for (int i = 0; i < numShips; i++) {
        std::tuple<int, int> shipPos = Utils::generateRandomPos(gridWidth, gridHeight);
        entities.push_back(new Ship(std::get<0>(shipPos), std::get<1>(shipPos)));
    }
    for (int i = 0; i < numMines; i++) {
        std::tuple<int, int> minePos = Utils::generateRandomPos(gridWidth, gridHeight);
        entities.push_back(new Mine(std::get<0>(minePos), std::get<1>(minePos)));
    }
    return entities;
}

void Game::gameLoop(int maxIterations, double mineDistanceThreshold) {
    for (int iteration = 1; iteration <= maxIterations; iteration++) {
        for (GameEntity* entity : entities) {
            if (entity->getType() == 'S') {
                static_cast<Ship*>(entity)->move(1, 0);
            }
        }

        for (GameEntity* entity : entities) {
            if (entity->getType() == 'M') {
                for (GameEntity* ship : entities) {
                    if (ship->getType() == 'S') {
                        double distance = Utils::calculateDistance(entity->getPos(), ship->getPos());
                        if (distance < mineDistanceThreshold) {
                            Explosion explosion = static_cast<Mine*>(entity)->explode();
                            explosion.apply(*static_cast<Ship*>(ship));
                        }
                    }
                }
            }
        }
    }
}
