#include <iostream>
using namespace std;

int median_array(int array[],int n){
    if(n<1){
        return 0;
    }

    if(n%2==0){
        return 0;
    }

    sort(array, array + n);
    return array[(n-1)/2];
}