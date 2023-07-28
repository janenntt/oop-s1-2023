#include <iostream>

double weighted_average(int array[], int n){
    if(n<1){
        return 0;
    }

    double sum=0;
    for(int i=0;i<n;i++){
        int counter=0;
        for(int j=0;j<n;j++){
            if(array[i]==array[j]){
                counter++;
            }
        }
        sum+=(array[i]*counter); 
    }

    return sum/n;

}