#include <iostream>
using namespace std;

/* Part 2 */ 
void changeValue(double* X_ptr){
    *X_ptr=42.0;
}

/* Part 3 */
void printArray(double* array, int size){
    for(int i=0;i<size;i++){
        cout << array[i] << " ";
    
    }
    cout << endl;
}


/* Part 4 */
double arrayMax(double* array1, int size1){

    if(size1 <=0){
        return 0.0;
    }

    double max = array1[0];
    for(int i=1; i<size1; i++){
        if(array1[i]>max){
            max = array1[i];
        }
    }
    return max;
}

/* Part 7 */
double* dynamicArray(int size2, double A){
    double* array2 = new double[size2];
    for (int i=0; i<size2;i++){
        array2[i]=A;
    }
    return array2;
}