#include <iostream>
#include "Asset.h"
using namespace std; 
int main() {
Asset m1;
std::cout << "Default value: " << m1.get_value() << ", Default product type: " << m1.get_product_type() << std::endl;
Asset m2(0, "a");
std::cout << "Default value: " << m2.get_value() << ", Default product type: " << m2.get_product_type() << std::endl;
return 0;

}