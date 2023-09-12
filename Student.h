#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;
#include "Person.h"
#include "Grade.h"

class Student:public Person{
    public:
        int id;
        Grade** grades;
        int grade_count;

        Student(string name);
        void addGrade(int value);
};
#endif