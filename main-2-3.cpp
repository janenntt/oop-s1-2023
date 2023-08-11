#include <iostream>
using namespace std;
extern int palindrome_sum(int integers[],int length);
extern bool is_array_palindrome(int integers[], int length);
extern int sum_integers(int integers[], int length);

int main(){
    int integers[6] = {1,2,3,3,2,1};
    
    int result = palindrome_sum(integers, 6);

    if(result==-2){
        cout << "The array is not a palindrome array" << endl;
    } else {
        cout << "Sum of elements = " << palindrome_sum(integers,6) << endl;
    }
   
    return 0;
}