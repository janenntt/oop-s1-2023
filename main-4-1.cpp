#include <iostream>
using namespace std;

extern int *readNumbers();
extern int secondSmallestSum(int *numbers, int length);

int main(){
    int *numbers = readNumbers();
    int result = secondSmallestSum(numbers,5);

    cout << result << endl;

    delete[] numbers;

    return 0;
}