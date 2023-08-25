#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
public:
    Player();
    Player(int jerseyNumber, const std::string name);

    std::string get_name() const;
    int get_jersey_number() const;

private:
    int jerseyNumber;
    std::string name;
};

#endif 
