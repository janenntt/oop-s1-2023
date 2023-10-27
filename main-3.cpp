#include "Spot.h"
#include "Snare.h"
#include "Persona.h"
#include "Assists.h"
#include <iostream>
using namespace std;

int main(){
    Play game;
    game.initPlay(10, 20, 50, 50);
    game.playCycle(5, 10);
}