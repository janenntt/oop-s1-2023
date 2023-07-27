#include <iostream>
using namespace std;

extern int max_element(int array[], int n);

int main(){
    int array[7] = {4,9,2,3,5,0,12};

    int result = max_element(array,7);

    cout << "Max element is: " << result << endl;

    return 0;

}

