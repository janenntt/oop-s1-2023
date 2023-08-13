#include <iostream>
using namespace std;

int *readNumbers(){
    int *numbers = new int[10];

    for (int i=0;i<10;i++){
        cin >> numbers[i];
    }
    return numbers;
}


void printNumbers(int *numbers,int length){
    for (int j=0; j<length; j++){
        cout << j << " " << numbers[j] << endl;
    }
}