#include <iostream>
using namespace std;

extern int *readNumbers();
extern int secondSmallestSum(int *numbers, int length);
extern void printNumbers(int *numbers, int length);

int main(){
    int* a;
    a = readNumbers();
    int secondsmallest = secondSmallestSum(a,10);
    cout << "Second smallest sum: " << secondsmallest << endl;
    return 0;
}