#include "wizard.h"
#include <string>

Wizard::Wizard(string name, int health, int damage, int mana): Player(name,health,damage), mana(mana){}

void Wizard::castSpell(Player* opponent){
    cout << name << " casts a spell on " << opponent->getName() << " for " << mana << " damage.\n";
    opponent->takeDamage(mana);
}