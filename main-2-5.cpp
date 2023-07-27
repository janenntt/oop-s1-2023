#include <iostream>
using namespace std;

extern bool is_descending (int array[], int n);

int main(){
    int array[7] = {3,6,2,7,4,7,3};

    int result = is_descending(array, 7);

    cout << "The elements in the array are in a descending order? " << result << endl;


    return 0;

}