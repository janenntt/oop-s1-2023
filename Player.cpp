#include "Player.h"
#include <string> 
using namespace std; 
Player::Player() : jerseyNumber(0), name("") {}

Player::Player(int jerseyNumber, string name) : jerseyNumber(jerseyNumber), name(name) {}

std::string Player::get_name() const {
    return name;
}

int Player::get_jersey_number() const {
    return jerseyNumber;
}

