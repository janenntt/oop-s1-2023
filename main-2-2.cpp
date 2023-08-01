#include <iostream>
using namespace std;

extern int binary_to_int(int binary_digits[], int number_of_digits);

int main(){

    int binary_digits[9] = {1,0,1,0,0,1,1,1,0};

    cout << "Integer value: " << binary_to_int(binary_digits,9) << endl;

    return 0;
}