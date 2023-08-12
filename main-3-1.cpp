#include <iostream>
using namespace std;

extern int *readNumbers();
extern bool equalsArray(int *numbers1, int *numbers2, int length);

int main(){
    printf("Array 1\n");
    int *numbers1 = readNumbers();
    printf("Array 2\n");
    int *numbers2 = readNumbers();

    cout << "Are the two arrays the same? " << equalsArray(numbers1,numbers2,5) << endl;

    delete[] numbers1;
    delete[] numbers2;

    return 0;

}