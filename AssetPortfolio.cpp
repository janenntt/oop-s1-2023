#include <iostream>
#include "AssetPortfolio.h"
using namespace std; 
AssetPortfolio::AssetPortfolio(): count(0), size(0){
    this-> a = new Asset[size]; 
}           // default constructor capacity of zero assets
AssetPortfolio::AssetPortfolio(int size):count(0), size(size){
    this-> a = new Asset[size]; ;   // constructor for a portfolio of given size
}
// returns the number of assets which are in the portfolio
int AssetPortfolio::get_num_assets(){
    return count; 
} 

// returns true if any asset in the portfolio is of the specified product type
// otherwise returns false
bool AssetPortfolio::has_asset(std::string product){
    for (int i = 0; i < count; i++){
        if (a[i].product_type == product){
            return true; 
        }
    }
    return false; 
} 

Asset *AssetPortfolio::get_assets(){
    return a; 
}       // returns the array of assets of the portfolio

// returns true and adds new asset to the portfolio if the portfolio is not full
// otherwise returns false
bool AssetPortfolio::add_asset(Asset new_asset){
    if (count < size){
        a[count] = new_asset; 
        count++; 
        return true; 
    }
    return false; 
}

AssetPortfolio::~AssetPortfolio(){
    delete [] a; 
}  // destructor
 AssetPortfolio.h
 Download
#include <iostream>
#include "Asset.h"
#include <string> 
class AssetPortfolio{
private:
public:
int count; 
Asset *a; 
int size; 
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
};