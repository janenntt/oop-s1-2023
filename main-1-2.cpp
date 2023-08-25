#include <iostream>
#include "Asset.h"
#include "AssetPortfolio.h"
using namespace std;

int main() {
    AssetPortfolio assetA(5, "notes");

    Asset a1(10, "notes");
    Asset a2(9, "notes");
    Asset a3(11, "notes");

    assetA.add_assets(a1);
    assetA.add_assets(a2);
    assetA.add_assets(a3);

    cout << "Product type: " << assetA.get_name() << endl;
    cout << "Current Number of assets: " << assetA.get_num_assets() << endl;

    Asset* assets = assetA.get_assets();
    cout << "Assets:" << endl;
    for (int i = 0; i < assetA.get_num_assets(); ++i) {
        cout << "Asset " << i + 1 << " - " << assets[i].get_product_type() << ", Value: " << assets[i].get_value() << endl;
    }

    return 0;
}
