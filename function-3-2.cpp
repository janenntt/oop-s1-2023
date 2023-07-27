#include <iostream>
#include <algorithm>
using namespace std;

int median_array(int array[], int n){
    if(n<1){
        return 0;
    }

    sort(array,array+n);

    return array[n/2];

}