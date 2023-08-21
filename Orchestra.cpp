#include "Orchestra.h"
#include <iostream>

Orchestra::Orchestra() : max_size(0), current_size(0), members(nullptr) {}

Orchestra::Orchestra(int size) : max_size(size), current_size(0) {
    members = new Musician[max_size];
}

Orchestra::~Orchestra() {
    delete[] members;
}

int Orchestra::get_current_number_of_members() const {
    return current_size;
}

bool Orchestra::has_instrument(std::string instrument) const {
    for (int i = 0; i < current_size; ++i) {
        if (members[i].get_instrument(instrument)) {
            return true;
        }
    }
    return false;
}

Musician* Orchestra::get_members() const {
    return members;
}

bool Orchestra::add_musician(const Musician& new_musician) {
    if (current_size < max_size) {
        members[current_size] = new_musician;
        ++current_size;
        return true;
    }
    return false;
}s
