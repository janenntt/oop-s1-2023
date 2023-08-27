#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player{
    protected:
        std::string name;
        int health;
        int damage;

    public:
        
        Player(std::string name, int health, int damage); //constructor that sets the data members to the given values

        void attack(Player* opponent, int damage); //deals damage to the opponent based on the player's damage points 
        
        void takeDamage(int damage); //reduces the player's health by the given amount


        std::string getName() const;
        int getHealth() const;
        void setHealth(int remaining_health);

};

#endif