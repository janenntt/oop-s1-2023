#include <iostream>

using namespace std;
int median_array(int array[], int n) {
  if (n < 1) {
    return 0;
  }
  else{
    if (n % 2 == 0) {
      return 0;
    } 
    else {
      for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
          if (array[i] > array[j]) {
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
          }
        }
      }
      int a = array[(n - 1) / 2];
      return a;
    }
  }
}