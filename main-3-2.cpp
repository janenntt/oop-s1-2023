#include <iostream>
extern int median_array(int array[], int n); 
using namespace std; 
int main()
{
    int a[] = {7,4,5,1,2,3,5,9,8};
    int x = median_array(a, 9); 
    cout <<"The median of the list is: "<< x << endl; 
}