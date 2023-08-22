#ifndef ORCHESTRA_H
#define ORCHESTRA_H
#include "Musician.h"
#include <string>
using namespace std;

class Orchestra{
private: 
    int current_size;
    int max_size;
    Musician *members;

public:
    Orchestra();
    Orchestra(int size);
    ~Orchestra();

    int get_current_number_of_members();
    bool has_instrument(string instrument);
    Musician *get_members();
    bool add_musician(Musician new_musician);

};

#endif