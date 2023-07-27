#include <iostream>
using namespace std;

extern int median_array(int array[], int n);

int main(){
    int array[5] = {2,7,8,4,9};
    int result = median_array(array,5);

    cout << "Median of array: " << result << endl;

    return 0;

}