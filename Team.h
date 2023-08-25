#ifndef TEAM_H
#define TEAM_H

#include <string>
#include "Player.h"

using namespace std;

class Team {
public:
    Team();
    Team(int max_size, string name);
    ~Team();

    int get_current_number_of_players();
    string get_name();
    Player* get_roster();
    bool add_player(Player new_player);

private:
    int max_size;
    string name;
    Player* roster;
    int current_size;
};

#endif 