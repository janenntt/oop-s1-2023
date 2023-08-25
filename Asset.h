#ifndef ASSET_H
#define ASSET_H
#include <string>
using namespace std;

class Asset{
private:
    string product_type;
    int value;

public:
    Asset();
    Asset(string product_type, int value);

    string get_product_type();
    int get_value();

};

#endif





