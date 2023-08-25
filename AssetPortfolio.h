#ifndef ASSETPORTFOLIO_H
#define ASSETPORTFOLIO_H

#include "Asset.h"
using namespace std;

class AssetPortfolio {
public:
    AssetPortfolio();           
    AssetPortfolio(int size);   
    ~AssetPortfolio();          

    int get_num_assets() const;
    bool has_asset(string product) const;
    Asset* get_assets() const;
    bool add_asset(Asset new_asset);

private:
    int capacity;
    int num_assets;
    Asset* assets;
};

#endif 
