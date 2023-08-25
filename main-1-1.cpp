#include <iostream>
#include "Asset.h"

int main() {
    // Test default constructor
    Asset defaultAsset;
    std::cout << "Default Asset - Type: " << defaultAsset.get_product_type()
              << ", Value: " << defaultAsset.get_value() << std::endl;

    // Test parameterized constructor
    Asset customAsset(10000, "Stock");
    std::cout << "Custom Asset - Type: " << customAsset.get_product_type()
              << ", Value: " << customAsset.get_value() << std::endl;

    return 0;
}
