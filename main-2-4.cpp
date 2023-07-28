#include <iostream>
using namespace std;

extern bool is_ascending(int array[], int n);

int main(){
    
    int array[5] = {0,0,0,0,0};
    for(int j=0;j<5;j++){
        cin >> array[j];
    }

    int result = is_ascending(array,5);
    cout << "The elements in the array are in ascending order? " << result << endl;

    return 0;

}