#include <iostream>
#include <string>
using namespace std;

extern void print_binary_str(string decimal_number);

int main(){

    string decimal_number;
    cout << "Enter a positive decimal number: ";
    cin >> decimal_number;

    print_binary_str(decimal_number);

    return 0;
}