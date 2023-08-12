#include <iostream>
using namespace std;

int *readNumbers(){
    int *numbers = new int[10];

    for (int i=0;i<10;i++){
        printf("Enter number %d: ",i+1);
        cin >> numbers[i];
    }
    return numbers;
}


void printNumbers(int *numbers,int length){
    for (int j=0; j<length; j++){
        cout << j << " " << numbers[j] << endl;
    }
}