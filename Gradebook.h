#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include <string>
using namespace std;

class Gradebook{
    public:
        void addGrade(int stud_id, int course_id, string assignment, int value);
        
};
#endif