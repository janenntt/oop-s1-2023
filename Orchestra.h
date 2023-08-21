#ifndef ORCHESTRA_H
#define ORCHESTRA_H

#include <string>
#include "Musician.h"  // Assuming you have a Musician class defined

class Orchestra {
public:
    Orchestra();           // default constructor
    Orchestra(int size);   // constructor for an orchestra of given size
    ~Orchestra();          // destructor

    int get_current_number_of_members() const;
    bool has_instrument(std::string instrument) const;
    Musician* get_members() const;

    bool add_musician(const Musician& new_musician);

private:
    int max_size;
    int current_size;
    Musician* members;
};

#endif // ORCHESTRA_H
