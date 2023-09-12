#include "Student.h"
#include "Grade.h"
#include <string>
using namespace std;

Student::Student(string name):Person(name){
    this->grades = nullptr;
    this->grade_count=0;
}

void Student::addGrade(int value){
    
}