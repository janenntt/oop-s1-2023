#include "Course.h"
#include <string>
using namespace std;
#include "Person.h"
#include "Instructor.h"
#include "Student.h"

Course::Course(int id, string name){
    this->id=id;
    this->name=name;
    this->persons=nullptr;
    this->count_person=0;
}

Course::~Course(){
    delete[] persons;
}

void Course::add_student(Student* student){

}

void Course::add_instructor(Instructor* instructor){

}
