#include <iostream>
#include "Person.h"
using namespace std;

extern PersonList createPersonList(int n);

int main(){
    int n=3;
    PersonList list = createPersonList(n);
    
    for(int i=0;i<list.numPeople; i++){
        cout << "Person" << i+1 << " - Name: " << list.people[i].name << ", Age: " << list.people[i].age << endl;

    } 
    delete [] list.people;

    return 0;
}