#include <iostream>
using namespace std;

extern bool is_ascending(int array[], int n);

int main(){
    int array[5] = {1,2,3,4,5};

    int result = is_ascending(array,5);

    cout << "The elements in the array is in an ascending order? " << result << endl;

    return 0;
}