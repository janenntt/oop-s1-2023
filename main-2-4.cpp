#include <iostream>
using namespace std;

extern int sum_min_max(int integers[], int length);
extern int array_min(int integers[], int length);
extern int array_max(int integers[], int length);

int main(){

    int integers[5] = {3,9,5,7,2};
    cout << "Sum of min and max of the array: " << sum_min_max(integers,5) << endl;

    return 0;
}