#include <iostream>
using namespace std;

int* readNumbers(){
    int *arr;
    arr = new int[10];

    for(int i=0; i<10; i++){
        cin>>*(arr+i);
    }   

    return arr;

}   

void printNumbers(int *numbers, int length){
    for(int i=0; i<length; i++){
    cout<< i << " " << *(numbers+i) << endl;
    }
}

void hexDigits(int *numbers, int length){
    for(int i=0;i<length;i++){
        cout << i << " " << numbers[i] << " ";
        if(numbers[i]>=0 && numbers[i]<=9){
            cout << numbers[i];
        } else {
            switch(numbers[i]){
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