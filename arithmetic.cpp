#include <iostream>
#include <string.h>
using namespace std;

string addition(string binary1, string binary2){
    int carry=0;
    string result = "";

    int i = binary1.length()-1;
    int j = binary2.length()-1;

    while (i>=0 || j >= 0 || carry){
        int sum=carry;
        if(i>=0){
            sum+=binary1[i--] - '0';
        }
        if(j>=0){
            sum+=binary2[j--] - '0';
        }

        carry=sum/2;
        result += to_string(sum%2);
    }

    
    return result;
}

string subtraction(string binary1, string binary2){
    int borrow = 0;
    string result = "";

    int i = binary1.length()-1;
    int j = binary2.length()-1;

    while (i>=0 || j >=0){
        int difference = borrow;
        if(i>=0){
            difference += binary1[i--] - '0';
        }

        if(j>=0){
            difference -= binary2[j--] - '0';
        }

        if (difference < 0){
            difference += 2;
            borrow = -1; 
        }
        else{
            borrow = 0; 
        }
        result += to_string(difference);
    }

    
    return result;

}

string multiplication(string binary1, string binary2){
    string result = "0";
    int length2=binary2.length();

    for(int i=length2-1; i>=0; i--){
        if(binary2[i]=='1'){
            result = addition(result,binary1);
        }
        binary1=binary1 + "0";
    }

    return result;

}

pair<string,string> division(string dividend, string divisor){
    string quotient ="", rem = "";
    int len = dividend.length();

    for(int i=0; i<len; i++){
        rem+=dividend[i];
        while (rem.length()>0 && rem[0]=='0'){
            rem.erase(0,1);
        }

        if(rem.length() < divisor.length() || (rem.length()==divisor.length() == divisor.length() && rem<divisor)){
            quotient += "0";
        }
        else{
            quotient+="1";
            rem = subtraction(rem, divisor);
        }
    }
    return make_pair(quotient,rem);
}

int main(){
    string binary1;
    string binary2;
    cout << "Type your first binary number: ";
    cin >> binary1;
    cout << "Type your second binary number: ";
    cin >> binary2; 

    cout << "Binary addition = " << addition(binary1, binary2) << endl;
    cout << "Binary subtraction = " << subtraction(binary1, binary2) << endl;
    cout << "Binary multiplication = " << multiplication(binary1, binary2) << endl;
    
    pair<string,string> division_result = division(binary1,binary2);
    cout << "Binary division (quotient) = " << division_result.first << endl;
    cout << "Binary division (remainder) = " << division_result.second << endl;

    return 0;
    
}
