#include <iostream>
#include <string.h>
using namespace std;

string converter(int number10){
    if(number10==0){
        return "0";
    }

    string number2;
    while (number10 > 0){
        int rem = number10%2;
        number2 = to_string(rem) + number2;
        number10 /= 2;
        
    }
    return number2;
}

int main(){
    int number10;
    cout << "Type a number in base 10: "; 
    cin >> number10;

    string number2 = converter(number10);
    cout << "Binary representation of " << number10 << " is " << number2 << endl;
    return 0;
}
    


    