#include <iostream>
using namespace std;

extern int array_sum(int array[], int n);

int main(){
    int array[7] = {1,2,3,4,5,6,7};
    
    int result = array_sum(array,7);
    cout << "Sum of all elements is: " << result << endl;

    return 0;

}