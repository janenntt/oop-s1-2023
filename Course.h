#ifndef COURSE_H
#define COURSE_H
#include <string>
#include "Person.h"
using namespace std;
#include "Student.h"
#include "Instructor.h"

class Course{
    public:
        string name;
        int id;
        Person** persons;
        int count_person;

        Course(int id, string name);
        ~Course();
        void add_student(Student* student);
        void add_instructor(Instructor* instructor);
        void addPerson();
};
#endif