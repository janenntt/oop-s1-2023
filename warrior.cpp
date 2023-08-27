#include "player.h"
#include "warrior.h"
#include <string>

Warrior::Warrior(string name, int health, int damage, string weapon): Player(name,health,damage),weapon(weapon){}

void Warrior::swingWeapon(Player* opponent){
    cout << name << " swings their " << weapon << " at " << opponent->getName() << "!\n";
    opponent->takeDamage(damage);
}