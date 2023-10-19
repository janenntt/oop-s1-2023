#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"

int main() {
    Ship myShip(10, 20);
    Mine myMine(30, 40);

    // Move the ship
    myShip.move(5, 5);

    // Explode the mine
    Explosion explosion = myMine.explode();

    // Apply the explosion to the ship
    explosion.apply(myShip);

    return 0;
}
