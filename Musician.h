#ifndef MUSICIAN_H
#define MUSICIAN_H
#include <string>

class Musician {
public:
    Musician();                               // default constructor
    Musician(std::string instrument, int experience); // constructor
    std::string get_instrument() const;        // returns the instrument played
    int get_experience() const;                // returns the number of years experience

private:
    std::string instrument;
    int experience;
};

#endif // MUSICIAN_H
