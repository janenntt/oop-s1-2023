#include <iostream>
using namespace std;

extern double array_mean(int array[],int n);

int main(){
    int array[7]={1,2,3,4,5,6,7};
    int result = array_mean(array,7);
    
    cout << "The average of all elements is: " << result << endl;

    return 0;
}