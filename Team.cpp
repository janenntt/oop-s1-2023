#include "Team.h"
#include "Player.h"
#include <string>
using namespace std;

Team::Team() : max_size(0), name(""), roster(nullptr), current_size(0) {}

Team::Team(int max_size, string name) : max_size(max_size), name(name), current_size(0) {
    roster = new Player[max_size];
}

Team::~Team() {
    delete[] roster;
}

int Team::get_current_number_of_players() {
    return current_size;
}

std::string Team::get_name(){
    return name;
}

Player* Team::get_roster(){
    return roster;
}

bool Team::add_player( Player new_player) {
    if (current_size < max_size) {
        roster[current_size] = new_player;
        current_size++;
        return true;
    }
    return false;
}
