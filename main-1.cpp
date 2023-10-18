#include <iostream>
#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"
#include <tuple>
#include <stdlib.h>

int main(){
    GameEntity player1(5,7,'A');
    GameEntity player2(10,20,'B');

    std::tuple <int,int> pos1 = player1.getPos();
    std::tuple <int,int> pos2 = player2.getPos();

    double distance = Utils::calculateDistance(pos1,pos2);

    std::cout << "Entity 1: Position (" << std::get<0>(pos1) << " , " << std::get<1>(pos1) << "), Type: " << player1.getType() << std::endl;
    std::cout << "Entity 2: Position (" << std::get<0>(pos1) << " , " << std::get<1>(pos2) << "), Type: " << player2.getType() << std::endl;
    std::cout << "Euclidean distance between the two players: " << distance << std::endl;

    // generate some random positions and calculate distances between them
    std::tuple <int,int> rand_pos1 = Utils::generateRandomPos(10,20);
    std::tuple <int,int> rand_pos2 = Utils::generateRandomPos(15,20);

    double rand_distance = Utils::calculateDistance(rand_pos1, rand_pos2);

    std::cout << "Random Postion 1: (" << std::get<0>(rand_pos1) << " , " << std::get<1>(rand_pos1) << ")" << std::endl;
    std::cout << "Random Postion 2: (" << std::get<0>(rand_pos2) << " , " << std::get<1>(rand_pos2) << ")" << std::endl;
    std::cout << "Euclidean distance: " << rand_distance << std::endl;

    return 0;
}