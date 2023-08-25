Open sidebar
Asset Class Implementation

Default (GPT-3.5)

User
Design a class called Asset. Assets need to store state about the type of the financial asset and the value of the asset.

Asset must provide the following public behaviours (methods):

Asset();                            // a default constructor 

// a constructor that takes the product type  and value
Asset(int value, std::string product_type);      

std::string get_product_type();    // returns the financial asset type 
int get_value();                   // returns the the value of asset
~Asset();                          // A default destructor
You may add any other methods and any state variables you want, but the methods listed above must be available and public.

The default constructor should set the type of asset to the empty string "" and  the value of the asset to zero.

Write Asset.h and Asset.cpp files to declare and implement the Asset class.

Write a main-1-1.cpp file that tests all of your methods (behaviours) to make sure they are all working correctly.

ChatGPT
Sure, here's how you can implement the Asset class in C++:

Asset.h:

cpp
Copy code
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
Asset.cpp:

cpp
Copied!
#include "Asset.h"

// Default constructor
Asset::Asset() : value(0), product_type("") {}

// Parameterized constructor
Asset::Asset(int value, std::string product_type) : value(value), product_type(product_type) {}

// Getter for product type
std::string Asset::get_product_type() const {
    return product_type;
}

// Getter for asset value
int Asset::get_value() const {
    return value;
}

// Destructor
Asset::~Asset() {}

main.cpp:

cpp
Copy code
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
In the main.cpp file, we include the "Asset.h" header, create instances of the Asset class using both constructors, and then use the getter methods to retrieve and print the asset type and value.




User
Design a class called AssetPortfolio. An AssetPortfolio contains assets. It has a maximum number of Assets and a list of Assets that currently belong to the portfolio. Asset objects can be added to the portfolio as long as the portfolio is not full.

Your AssetPortfolio class must provide the following public methods:

AssetPortfolio();           // default constructor capacity of zero assets
AssetPortfolio(int size);   // constructor for a portfolio of given size

// returns the number of assets which are in the portfolio
int get_num_assets(); 

// returns true if any asset in the portfolio is of the specified product type
// otherwise returns false
bool has_asset(std::string product); 

Asset *get_assets();       // returns the array of assets of the portfolio

// returns true and adds new asset to the portfolio if the portfolio is not full
// otherwise returns false
bool add_asset(Asset new_asset);

~AssetPortfolio();  // destructor
You may add any other methods and any state variables you want, but the methods listed above must be available and public. The default AssetPortfolio size is 0.

Write AssetPortfolio.h and AssetPortfolio.cpp files to declare and implement the AssetPortfolio class.

Write a main-1-2.cpp file that tests all of your methods (behaviours) to make sure they are all working correctly.

ChatGPT
Certainly! Here's the implementation of the AssetPortfolio class along with the main.cpp file for testing:

AssetPortfolio.h:

cpp
Copy code
#ifndef ASSETPORTFOLIO_H
#define ASSETPORTFOLIO_H

#include "Asset.h"

class AssetPortfolio {
public:
    AssetPortfolio();           // Default constructor capacity of zero assets
    AssetPortfolio(int size);   // Constructor for a portfolio of given size
    ~AssetPortfolio();          // Destructor

    int get_num_assets() const;
    bool has_asset(std::string product) const;
    Asset* get_assets() const;
    bool add_asset(Asset new_asset);

private:
    int capacity;
    int num_assets;
    Asset* assets;
};

#endif // ASSETPORTFOLIO_H
AssetPortfolio.cpp:

cpp
Copy code
#include "AssetPortfolio.h"
#include <iostream>

AssetPortfolio::AssetPortfolio() : capacity(0), num_assets(0), assets(nullptr) {}

AssetPortfolio::AssetPortfolio(int size) : capacity(size), num_assets(0) {
    assets = new Asset[size];
}

AssetPortfolio::~AssetPortfolio() {
    delete[] assets;
}

int AssetPortfolio::get_num_assets() const {
    return num_assets;
}

bool AssetPortfolio::has_asset(std::string product) const {
    for (int i = 0; i < num_assets; ++i) {
        if (assets[i].get_product_type() == product) {
            return true;
        }
    }
    return false;
}

Asset* AssetPortfolio::get_assets() const {
    return assets;
}

bool AssetPortfolio::add_asset(Asset new_asset) {
    if (num_assets < capacity) {
        assets[num_assets] = new_asset;
        num_assets++;
        return true;
    }
    return false;
}
main.cpp:

cpp
Copy code
#include <iostream>
#include "AssetPortfolio.h"

int main() {
    AssetPortfolio portfolio(3);  // Create a portfolio with a capacity of 3 assets

    // Add assets to the portfolio
    Asset asset1(5000, "Stock");
    Asset asset2(10000, "Bond");
    Asset asset3(2000, "Real Estate");

    portfolio.add_asset(asset1);
    portfolio.add_asset(asset2);
    portfolio.add_asset(asset3);

    std::cout << "Number of assets in portfolio: " << portfolio.get_num_assets() << std::endl;

    // Check if the portfolio has a certain asset type
    std::cout << "Portfolio has Stock: " << (portfolio.has_asset("Stock") ? "Yes" : "No") << std::endl;
    std::cout << "Portfolio has Cryptocurrency: " << (portfolio.has_asset("Cryptocurrency") ? "Yes" : "No") << std::endl;

    return 0;
}
This code sets up an AssetPortfolio class with methods to manage and interact with a portfolio of assets. The main.cpp file tests these methods by creating an AssetPortfolio instance, adding assets to it, and checking if specific asset types are present in the portfolio.





Send a message


Free Research Preview. ChatGPT may produce inaccurate information about people, places, or facts. ChatGPT August 3 Version
