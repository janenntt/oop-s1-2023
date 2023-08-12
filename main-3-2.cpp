#include <iostream>
using namespace std;

extern int *reverseArray(int *numbers1, int length);
extern int *readNumbers();
extern bool equalsArray(int *numbers1, int *numbers2, int length);

int main(){
    int *numbers1 = readNumbers();
    int *numbers2 = reverseArray(numbers1,5);
    cout << "Result: " << equalsArray(numbers1,numbers2,5) << endl;

    delete[] numbers1;
    delete[] numbers2;

    return 0;
}