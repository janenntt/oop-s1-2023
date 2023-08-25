#include <iostream>
#include "Asset.h"
using namespace std;
int main() {

    Asset defaultAsset;
    cout << "Default Asset - Type: " << defaultAsset.get_product_type()
              << ", Value: " << defaultAsset.get_value() << endl;

    Asset customAsset(10, "Stock");
    cout << "Custom Asset - Type: " << customAsset.get_product_type()
              << ", Value: " << customAsset.get_value() << endl;

    return 0;
}
