#include <iostream>
using namespace std;

extern int sum_diagonal(int array[4][4]);

int main(){
    int array[4][4] = {3,4,6,2,7,2,6,3,9,2,0,1,2,4,5,8};
    cout << "The sum of the elements along the main diagonal is " << sum_diagonal(array)<< endl;
    return 0;

}