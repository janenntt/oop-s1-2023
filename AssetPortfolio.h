#ifndef ASSETPORTFOLIO_H
#define ASSETPORTFOLIO_H
#include "Asset.h"
#include <string>
using namespace std;

class AssetPortfolio{
private:
    int current_size;
    int max_size;
    Asset *assets;

public:
    AssetPortfolio();
    AssetPortfolio(int size);
    
    int get_num_assets();
    bool has_asset(string product);
    Asset *get_assets();
    bool add_asset(Asset new_asset);

    ~AssetPortfolio(); //destructor
};

#endif