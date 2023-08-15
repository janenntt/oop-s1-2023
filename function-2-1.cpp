#include <iostream>
using namespace std;

void hexDigits(int *numbers, int length){
    for(int i=0;i<length;i++){
        cout << i << " " << numbers[i] << " ";
        int num = numbers[i];
        if(num>=0 and num <=9){
            cout <<num<< endl;
        } else{
            switch(num){
            case 10: 
                cout << "A";
                break;
            case 11:
                cout << "B";
                break;
            case 12:
                cout << "C";
                break;
            case 13: 
                cout << "D";
                break;
            case 14: 
                cout << "E";
                break;
            case 15: 
                cout << "F";
                break;
           
            }
        }
        cout << endl;
    }
}