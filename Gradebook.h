#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include <string>
using namespace std;
#include "Grade.h"

class Gradebook{
    private:
        Grade** grades;
        int grade_count;

    public:
        Gradebook();
        ~Gradebook();
        void addGrade(int stud_id, int course_id, string assignment, int value);
        
};
#endif