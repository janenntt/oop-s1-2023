#include <iostream>
using namespace std;

extern void count_digits(int array[4][4]);

int main(){

    int array[4][4]={2,5,3,5,8,3,6,1,0,9,7,5,3,1,4,8};

    count_digits(array);

    return 0;

}