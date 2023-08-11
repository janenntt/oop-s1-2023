#include <iostream>
using namespace std;

int bin_to_int(int binary_digits[], int number_of_digits){

    int sum=0;
    int base=1;
    for(int i=number_of_digits-1;i>=0;i--){
        
       sum+=binary_digits[i]*base;
       base*=2;
    }
    return sum;
}