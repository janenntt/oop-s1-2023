#include <iostream>
using namespace std;

extern bool is_fanarray(int array[], int n);

int main(){
    int array[6] = {1,3,5,5,3,1};
    int result = is_fanarray(array,6);
    cout << "Is array a fan array? " << result << endl;

    return 0;
}