#include <iostream>
#include "Person.h"
using namespace std;

PersonList shallowCopyPersonList(PersonList pl) {
    PersonList copy;
    copy.numPeople = pl.numPeople;
    copy.people = pl.people;  // Point to the same array as the original

    return copy;
}
