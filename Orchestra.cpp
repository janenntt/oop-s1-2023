#include "Orchestra.h"
#include "Musician.h"
using namespace std;

Orchestra::Orchestra() : current_size(0), max_size(0), members(nullptr) {}

Orchestra::Orchestra(int size) : current_size(0), max_size(size) {
    members = new Musician[size];
}

Orchestra::~Orchestra() {
    delete[] members;
}

int Orchestra::get_current_number_of_members() {
    return current_size;
}

bool Orchestra::has_instrument(string instrument){
    for (int i = 0; i < current_size; ++i) {
        if (members[i].get_instrument()==instrument) {
            return true;
        }
    }
    return false;
}

Musician* Orchestra::get_members(){
    return members;
}

bool Orchestra::add_musician(Musician new_musician) {
    if (current_size < max_size) {
        members[current_size] = new_musician;
        current_size++;
        return true;
    }
    return false;
}
