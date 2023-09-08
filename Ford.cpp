#include "Ford.h"

Ford::Ford() : badgeNumber(0), litresOfFuel(60.0) {}

Ford::Ford(int badgeNumber, int price) : badgeNumber(badgeNumber), litresOfFuel(60.0) {}

void Ford::refuel(int litres) {
    litresOfFuel += litres;
}

void Ford::drive(int kms) {
    emissions = 234 * kms;
    litresOfFuel -= (kms / 5.0);
    if (litresOfFuel < 0.0) {
        litresOfFuel = 0.0;
    }
}

int Ford::get_badgeNumber() const {
    return badgeNumber;
}

float Ford::get_litresOfFuel() const {
    return litresOfFuel;
}

void Ford::set_badgeNumber(int new_badgeNumber) {
    badgeNumber = new_badgeNumber;
}

void Ford::set_litresOfFuel(float new_litres) {
    litresOfFuel = new_litres;
}
