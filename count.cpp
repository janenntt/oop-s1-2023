#include <iostream>

extern int count (int[], int);

int main () {
    int array[5] = {5,6,7,8,9};
    int count_even=0;
    int count_odd=0;
    
    for(int i=0; i<5;i++){
        if(array[i]%2==0)
            count_even++;
        else   
            count_odd++;
    }
    std::cout << "Count even: " << count_even << "\nCount odd: " << count_odd;
}