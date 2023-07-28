#include <iostream>
using namespace std;

extern int median_array(int array[], int n);

int main(){
    int n; 
    int array[5] = {1,5,3,4,2};
    int result = median_array(array,5);

    cout << "The median of the array is: " << result << endl;

    return 0;

} 
