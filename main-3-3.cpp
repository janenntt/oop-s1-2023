#include <iostream>
using namespace std;

extern double weighted_average(int array[], int n);

int main(){

    int array[6] = {1,2,1,4,1,3};
    int result = weighted_average(array,6);

    cout << "The weighted average of the array is: " << result << endl;

    return 0;
}