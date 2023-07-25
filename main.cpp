#include <iostream>

int count(int[], int){

return 0; 

}


extern int count(int[], int);


int main()
{
    int array[] ={4,5,6,7,8};
    std::cout << "The number is: " << count(array, 5) << std::endl;
    return 0;
}

