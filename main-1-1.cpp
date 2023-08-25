#include <iostream>
#include "Asset.h"
using namespace std;

int main(){
    Asset m1;
    cout << "Default asset: " << m1.get_product_type() << ", Default value: " << m1.get_value() << endl;

    Asset m2(5,"notes");
    cout << "Asset: " << m2.get_product_type() << ", Value: " << m2.get_value() << endl;

    return 0;
}