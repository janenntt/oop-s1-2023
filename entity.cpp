#include <iostream>
#include <string>

class Player {
protected:
    std::string name;
    int health;
    int damage;

public:
    Player(std::string name, int health, int damage)
        : name(name), health(health), damage(damage) {}

    void attack(Player* opponent, int damage) {
        opponent->takeDamage(damage);
    }

    void takeDamage(int damage) {
        health -= damage;
        std::cout << name << " takes " << damage << " damage. Remaining health: " << health << "\n";
    }

    // Getters and setters
    std::string getName() const {
        return name;
    }

    int getHealth() const {
        return health;
    }

    void setHealth(int newHealth) {
        health = newHealth;
    }
};

class Wizard : public Player {
private:
    int mana;

public:
    Wizard(std::string name, int health, int damage, int mana)
        : Player(name, health, damage), mana(mana) {}

    void castSpell(Player* opponent) {
        std::cout << name << " casts a spell on " << opponent->getName() << " for " << mana << " damage.\n";
        opponent->takeDamage(mana);
    }
};

class Warrior : public Player {
private:
    std::string weapon;

public:
    Warrior(std::string name, int health, int damage, std::string weapon)
        : Player(name, health, damage), weapon(weapon) {}

    void swingWeapon(Player* opponent) {
        std::cout << name << " swings their " << weapon << " at " << opponent->getName() << "!\n";
        opponent->takeDamage(damage);
    }
};

int main() {
    // Create instances of Wizard and Warrior
    Wizard wizard("Gandalf", 100, 20, 30);
    Warrior warrior("Aragorn", 120, 25, "Sword");

    // Simulate battle
    while (wizard.getHealth() > 0 && warrior.getHealth() > 0) {
        wizard.castSpell(&warrior);
        if (warrior.getHealth() <= 0) {
            std::cout << warrior.getName() << " has been defeated!\n";
            std::cout << wizard.getName() << " wins the battle!\n";
            break;
        }

        warrior.swingWeapon(&wizard);
        if (wizard.getHealth() <= 0) {
            std::cout << wizard.getName() << " has been defeated!\n";
            std::cout << warrior.getName() << " wins the battle!\n";
            break;
        }
    }

    return 0;
}
