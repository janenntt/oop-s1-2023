#include <iostream>
using namespace std;

extern int sum_two_arrays(int arrays[], int secondarray[], int n);

int main(){

    int array[5] = {3,6,2,7,2};
    int secondarray[5] = {9,2,3,3,1};

    int result = sum_two_arrays(array, secondarray, 5);
    cout << "The sum of two arrays as an integer is: " << result << endl;

    return 0;
}