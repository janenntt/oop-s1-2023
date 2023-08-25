#include <iostream>
#include "Player.h"

int main() {
    // Test the default constructor
    Player defaultPlayer;
    std::cout << "Default Player - Name: " << defaultPlayer.get_name() << ", Jersey Number: " << defaultPlayer.get_jersey_number() << std::endl;

    // Test the parameterized constructor
    Player player1(10, "John");
    std::cout << "Player 1 - Name: " << player1.get_name() << ", Jersey Number: " << player1.get_jersey_number() << std::endl;

    Player player2(23, "Alice");
    std::cout << "Player 2 - Name: " << player2.get_name() << ", Jersey Number: " << player2.get_jersey_number() << std::endl;

    return 0;
}
