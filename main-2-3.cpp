#include <iostream>
using namespace std;

extern bool is_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);

int main(){
    int integers[6] = {1,2,3,3,2,1};
    
    is_palindrome(integers,6);

    cout << "Is the array a palindrome array? " << is_palindrome(integers,6) << endl;

    if (is_palindrome(integers,6)==1){
        sum_array_elements(integers,6);
        cout << "Sum of elements = " << sum_array_elements(integers,6) << endl;
    }

    return 0;
}