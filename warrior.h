#ifndef WARRIOR_H
#define WARRIOR_H
#include "player.h"
#include <string>

class Warrior : public Player{
    private:
        string weapon;
    public:
    Warrior(string name, int health, int damage, string weapon);
    void swingWeapon(Player* opponent);
};

#endif