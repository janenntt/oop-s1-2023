#include <iostream>
using namespace std;

extern bool is_fanarray(int array[], int n);

int main(){
    int array[7] = {1,3,5,7,5,3,1};
    int result = is_fanarray(array,7);
    cout << "Is array a fan array? " << result << endl;

    return 0;
}