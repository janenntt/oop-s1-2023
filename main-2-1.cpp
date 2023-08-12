#include <iostream>
using namespace std;

extern void hexDigits(int *numbers, int length);

int main(){
    int numbers[7] = {1,4,10,14,16,3,4};
    hexDigits(numbers,7);

    return 0;
}