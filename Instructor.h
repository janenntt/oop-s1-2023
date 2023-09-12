#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include <string>
using namespace std;
#include "Person.h"

class Instructor: public Person{
    public:
        Instructor(string name);
};
#endif
