#include <iostream>
using namespace std;

extern void print_pass_fail(char grade);

int main(){
    char grade_1 = 'B';
    char grade_2 = 'D';
    char grade_3 = 'A';

    print_pass_fail(grade_1);
    print_pass_fail(grade_2);
    print_pass_fail(grade_3);

    return 0;
}