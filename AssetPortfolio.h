#ifndef ASSETPORTFOLIO_H
#define ASSETPORTFOLIO_H

#include "Asset.h"

class AssetPortfolio {
public:
    AssetPortfolio();           // Default constructor capacity of zero assets
    AssetPortfolio(int size);   // Constructor for a portfolio of given size
    ~AssetPortfolio();          // Destructor

    int get_num_assets() const;
    bool has_asset(std::string product) const;
    Asset* get_assets() const;
    bool add_asset(Asset new_asset);

private:
    int capacity;
    int num_assets;
    Asset* assets;
};

#endif // ASSETPORTFOLIO_H
