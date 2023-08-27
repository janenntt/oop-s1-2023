#ifndef WIZARD_H
#define WIZARD_H
#include <string>
#include "player.h"

class Wizard : public Player{
    private:
        int mana;

    public:
    Wizard(string name, int health, int damage, int mana); 
    void castSpell(Player* opponent);
}; 

#endif