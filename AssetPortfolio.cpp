#include <string>
#include "AssetPortfolio.h"
#include "Asset.h"
using namespace std;

AssetPortfolio::AssetPortfolio(): current_size(0), max_size(0), product_type(""),assets(nullptr){}
AssetPortfolio::AssetPortfolio(int size): current_size(current_size), max_size(max_size),product_type(product_type){
    assets = new Asset[size];
}

int AssetPortfolio::get_num_assets(){
    return current_size;
}

bool AssetPortfolio::has_asset(){
    for(int i=0, i<current_size; i++){
        if(assets[i].get_product_type == product_type){
            return true;
        }
    }
    return false;
}

Asset *AssetPortfolio::get_assets(){
    return assets;
}

bool AssetPortfolio::add_asset(Asset new_asset){
    if(current_size < max_size){
        assets[current_size] = new_asset;
        current_size++;
        return true;
    }
    return false;
}


AssetPortfolio::~AssetPortfolio(){
    delete[] assets;
}


