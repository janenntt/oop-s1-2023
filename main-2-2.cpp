#include <iostream>
#include "Player.h"
#include "Team.h"
using namespace std;

int main() {
    Team team(5, "Barca");

    Player player1(10, "Messi");
    Player player2(9, "Suarez");
    Player player3(11, "Neymar");

    team.add_player(player1);
    team.add_player(player2);
    team.add_player(player3);

    cout << "Team Name: " << team.get_name() << endl;
    cout << "Current Number of Players: " << team.get_current_number_of_players() << endl;

    Player* roster = team.get_roster();
    cout << "Players on the Team:" << endl;
    for (int i = 0; i < team.get_current_number_of_players(); ++i) {
        cout << "Player " << i + 1 << " - Name: " << roster[i].get_name() << ", Jersey Number: " << roster[i].get_jersey_number() << endl;
    }

    return 0;
}
