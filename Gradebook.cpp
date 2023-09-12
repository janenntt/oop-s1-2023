#include "Gradebook.h"
#include <string>
using namespace std;

Gradebook::Gradebook(){
    this->grades=nullptr;
    this->grade_count=0;

}

Gradebook::~Gradebook(){
    delete[] grades;
}
void Gradebook::addGrade(int stud_id,int course_id, string assignment, int value){

}