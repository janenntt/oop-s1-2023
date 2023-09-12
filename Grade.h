#ifndef GRADE_H
#define GRADE_H
#include <string>
using namespace std;

class Grade{
    public:
        string assignment;
        int value;
    
    Grade(int value, string assignment);
};
#endif