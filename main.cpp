#include <iostream>
#include "workshop.h"

using namespace std;

int main(){
    /* Part 2 */
    double X = 17.7;
    double* X_ptr = &X;

    cout << "Original value of X is: " << X << endl;
    
    changeValue(X_ptr);
    cout << "Updated value of X is: " << X << endl;

    /* Part 3 */
    double array[7] = {1.2,5.3,7.4,0.8,3.5,7.3,8.4};
    cout << "Elements of array: ";
    printArray(array,7);


    /* Part 4 */
    double array1[7] = {2,7,4,9,3,6,2};
   
    arrayMax(array1, 7);

    cout << "The maximum value of the array: " << arrayMax(array1,7) << endl;


    /* Part 7 */
    int size2=5;
    double A = 7.0;

    double* dynamic_array = dynamicArray(size2, A);
    dynamic_array[2] = 17;

    arrayMax(dynamic_array,size2);

    cout << "Maximum value of the array: " << arrayMax(dynamic_array,size2) << endl;

    delete[] dynamic_array;

    return 0;

}   