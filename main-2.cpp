#include <iostream>
#include "Ship.h"
#include "Mine.h"

int main(){
    Ship a(10,20);
    Mine b(40,50);

    // Call functions
    a.move(5,5); // move the ship
    Explosion explosion = b.explode(); // explode the mine
    explosion.apply(a); // apply the explosion to the ship

    // print positions and types
    std::cout << "Positions of the ship is: (" << std::get<0>(a.getPos()) << ", " << std::get<1>(a.getPos()) << "), type: " << a.getType() << std::endl;
    std::cout << "Positions of the mine is: (" << std::get<0>(b.getPos()) << ", " << std::get<1>(b.getPos()) << "), type: " << b.getType() << std::endl;

    return 0;
}