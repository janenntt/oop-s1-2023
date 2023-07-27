#include <iostream>
using namespace std;

extern double sum_even(double array[],int n);

int main(){
    double array[5] = {3,5.6,2,1.9,8.4};
    double result = sum_even(array,5);
    cout << "Sum of elements in even positions: " << result << endl;

    return 0;

}