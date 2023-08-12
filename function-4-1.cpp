#include <iostream>
#include <limits>
using namespace std;

int *readNumbers(){
    int *numbers = new int[5];

    for (int i=0;i<5;i++){
        printf("Enter number %d: ",i+1);
        cin >> numbers[i];
    }
    return numbers;
}

int secondSmallestSum(int *numbers, int length){
    if(length<=1){
        return 0;
    }
    int smallestSum = numeric_limits<int>::max();
    int secondSmallestSum = numeric_limits<int>::max();

    for (int k=0; k<length; k++){
        int currentSum=0;
        for(int l=k; l<length; l++){
            currentSum += numbers[l];
            if(currentSum<smallestSum){
                secondSmallestSum=smallestSum;
                smallestSum=currentSum;
            } else if (currentSum < secondSmallestSum && currentSum != smallestSum){
                secondSmallestSum=currentSum;
            }
        }
    }
    return secondSmallestSum;
}