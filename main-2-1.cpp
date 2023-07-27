#include <iostream>
using namespace std;

extern int min_element(int array[], int n);

int main(){
    int array[7] = {4,7,3,-3,-1,9,4};
    int result = min_element(array,7);

    cout << "Min element is: " << result << endl;

    return 0;

}