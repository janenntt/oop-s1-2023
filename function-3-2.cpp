#include <iostream>
using namespace std;

int *readNumbers(){
    int *numbers = new int[5];

    for (int i=0;i<5;i++){
        cin >> numbers[i];
    }
    return numbers;
}

int *reverseArray(int *numbers1, int length){
    int *numbers2 = new int[length];

    for(int j=0;j<5;j++){
        numbers2[j]=numbers1[length-1-j];
    }
    return numbers2;
}

bool equalsArray(int *numbers1, int *numbers2, int length){
    if(length<1){
        return false;
    }
    for (int k=0;k<length;k++){
        if(numbers1[k]!=numbers2[length-1-k]){
            return false;
        }
    }
    return true;
}

