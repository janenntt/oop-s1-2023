#include <iostream>
using namespace std;

extern void hexDigits(int *numbers, int length);
extern int *readNumbers();
extern void printNumbers(int *numbers, int length);

int main(){
    int* numbers;
    numbers = readNumbers();
    hexDigits(numbers,10);
    return 0;
}
 