#include <string>
#include "Asset.h"
using namespace std;

Asset::Asset() : product_type(""), value(0){}
Asset::Asset(string product_type, int value): product_type(product_type), value(value){}

string Asset::get_product_type(){
    return product_type;
}

int Asset::get_value(){
    return value;
}

Asset::~Asset(){
    delete[];
}