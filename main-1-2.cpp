#include <iostream>
#include "AssetPortfolio.h"
using namespace std;

int main() {
    AssetPortfolio portfolio(2);  

    Asset asset1(5000, "Stock");
    Asset asset2(10000, "Bond");
    

    portfolio.add_asset(asset1);
    portfolio.add_asset(asset2);


    cout << "Number of assets in portfolio: " << portfolio.get_num_assets() << endl;
  
    cout << "Portfolio has Stock: " << (portfolio.has_asset("Stock") ? "Yes" : "No") <<endl;
    cout << "Portfolio has Cryptocurrency: " << (portfolio.has_asset("Cryptocurrency") ? "Yes" : "No") << endl;

    return 0;
}
