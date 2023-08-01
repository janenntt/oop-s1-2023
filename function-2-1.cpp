#include <iostream>
#include <string>
using namespace std;

void print_binary_str(string decimal_number){
    int decimal = stoi(decimal_number);

    if (decimal==0){
        cout << "0" << endl;
    }

    string binary;

    while (decimal>0){
        binary.insert(binary.begin(), '0' + (decimal%2));
        decimal/=2;
    }

    cout << "The binary representation of " << decimal_number << " is " << binary << endl;

}