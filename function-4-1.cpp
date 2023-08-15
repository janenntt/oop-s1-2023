#include<iostream>
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

int secondSmallestSum(int *numbers, int length){    
    int smallest, secondsmallest;
    smallest = secondsmallest = 0;

    for(int i=0; i<length-1; i++){
        smallest += numbers[i];
        secondsmallest += numbers[i];

    }

    secondsmallest += numbers[length-1];

    for(int i=0; i<length; i++){
        int sum = 0;
        for(int j=i; j<length; j++){
            sum += numbers[j];
            if(sum<smallest){
                secondsmallest = smallest;
                smallest = sum;
            } else if(sum<secondsmallest){
                secondsmallest = sum;
                }
        }

    }
    return secondsmallest;
}