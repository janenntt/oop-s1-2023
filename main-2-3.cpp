#include <iostream>
using namespace std;

extern void two_five_nine(int array[], int n);

int main(){
    int array[12] = {2,5,9,8,1,6,9,3,7,4,0,4};
    
    two_five_nine(array,12);

    return 0;
}

