#include <iostream>
using namespace std;

extern int count_evens(int number);

int main(){
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    int result = count_evens(number);
    cout << "Number of even numbers between 1 and " << number << ": " << result << endl;

    return 0;
}