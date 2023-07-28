#include <iostream>
using namespace std;

extern int median_array(int array[], int n);

int main(){
    int n; 
    int array[7] = {1,5,3,4,2,9,6};
    int result = median_array(array,7);

    cout << "The median of the array is: " << result << endl;

    return 0;

} 
