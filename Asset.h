#ifndef ASSET_H
#define ASSET_H
#include <string>
using namespace std;

class Asset {
public:
    Asset();  
    Asset(int value, string product_type);  

    string get_product_type() const; 
    int get_value() const;  

    ~Asset();

private:
    int value;
    string product_type;
};

#endif 
