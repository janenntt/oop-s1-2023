#include "AssetPortfolio.h"
#include <iostream>
using namespace std;

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

bool AssetPortfolio::has_asset(string product) const {
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
