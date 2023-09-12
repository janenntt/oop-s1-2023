#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include <string>
using namespace std;
#include "Course.h"

class University{
    public:
        string name;
        string location;
        Course* courses;
        int course_count;

        
        University(string name,string location);
        ~University();
        void addCourse(int id, string name);
};

#endif