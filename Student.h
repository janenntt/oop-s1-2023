#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;
#include "Person.h"
#include "Grade.h"

class Student:public Person{
    public:
        Student(string name);
};
#endif