#include <iostream>
using namespace std;

extern int bin_to_int(int binary_digits[], int number_of_digits);

int main(){
    int binary_digits[5] = {1,0,1,0,1}; 
    cout << "Integer value: " << bin_to_int(binary_digits,5) << endl;
}