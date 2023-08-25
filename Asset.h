#ifndef ASSET_H
#define ASSET_H
#include <string>
using namespace std;

class Asset {
public:
    Asset();  
    Asset(int value, string product_type);  

    string get_product_type(); 
    int get_value();  

    ~Asset();

private:
    int value;
    string product_type;
};

#endif 
