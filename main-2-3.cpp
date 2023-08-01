#include <iostream>
using namespace std;
extern int sum_if_palindrome(int integers[],int length);
extern bool is_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);

int main(){
    int integers[6] = {1,2,3,3,2,1};
    
    int result = sum_if_palindrome(integers, 6);

    if(result==-2){
        cout << "The array is not a palindrome array" << endl;
    } else {
        cout << "Sum of elements = " << sum_if_palindrome(integers,6) << endl;
    }
   
    return 0;
}