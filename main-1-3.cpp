#include <iostream>
#include "Person.h"
using namespace std;


extern PersonList deepCopyPersonList(PersonList pl);


int main() {
    // Create an original PersonList
    PersonList original;
    original.numPeople = 3;
    original.people = new Person[3];
    
    for (int i = 0; i < original.numPeople; ++i) {
        original.people[i].name = "Original Person";
        original.people[i].age = 30;
    }

    // Create a deep copy of the original PersonList
    PersonList copied = deepCopyPersonList(original);

    // Modify the copied PersonList to see if the original is unaffected
    copied.people[0].name = "Copied Person";
    copied.people[0].age = 25;

    // Print the original and copied PersonLists
    std::cout << "Original PersonList:" << std::endl;
    for (int i = 0; i < original.numPeople; ++i) {
        std::cout << "Person " << i+1 << " - Name: " << original.people[i].name << ", Age: " << original.people[i].age << std::endl;
    }

    std::cout << "\nCopied PersonList:" << std::endl;
    for (int i = 0; i < copied.numPeople; ++i) {
        std::cout << "Person " << i+1 << " - Name: " << copied.people[i].name << ", Age: " << copied.people[i].age << std::endl;
    }

    // Don't forget to free the allocated memory
    delete[] original.people;
    delete[] copied.people;

    return 0;
}
