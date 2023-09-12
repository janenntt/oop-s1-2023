#include "University.h"
#include <string>
using namespace std;
#include "Course.h"

University::University(string name, string location){
    this->name=name;
    this->location=location;
    this->courses=nullptr;
    this->course_count=0;
}

University::~University(){
    delete[] courses;
}

void University::addCourse(int id, string name){
    Course* new_course = new Course(id,name);
}