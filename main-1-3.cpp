#include <iostream>
using namespace std;

extern int num_count(int array[], int n, int number);

int main(){
    int array[]={1,2,3,4,5,6,7};
    int n = sizeof(array)/sizeof(array[0]);
    int number = 2;

    int result = num_count(array, n, 2);
    cout << "Number of elements equal to " << number << ": " << result << endl;

    return 0;
}