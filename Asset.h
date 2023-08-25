#ifndef ASSET_H
#define ASSET_H

#include <string>

class Asset {
public:
    Asset();  // Default constructor
    Asset(int value, std::string product_type);  // Parameterized constructor

    std::string get_product_type() const;  // Getter for product type
    int get_value() const;  // Getter for asset value

    ~Asset();  // Destructor

private:
    int value;
    std::string product_type;
};

#endif // ASSET_H
