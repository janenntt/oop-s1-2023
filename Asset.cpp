#include <iostream> 
#include <string> 
#include "Asset.h"
using namespace std; 
Asset::Asset(): value(0), product_type(""){};                            // a default constructor 
// a constructor that takes the product type  and value
Asset::Asset(int value, std::string product_type): value(value), product_type(product_type){};      
string Asset::get_product_type(){
    return product_type;
};    // returns the financial asset type 
int Asset::get_value(){
    return value; 
};                   // returns the the value of asset
Asset::~Asset(){

};