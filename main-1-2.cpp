#include <iostream>
#include "AssetPortfolio.h"

int main() {
    AssetPortfolio portfolio(3);  // Create a portfolio with a capacity of 3 assets

    // Add assets to the portfolio
    Asset asset1(5000, "Stock");
    Asset asset2(10000, "Bond");
    Asset asset3(2000, "Real Estate");

    portfolio.add_asset(asset1);
    portfolio.add_asset(asset2);
    portfolio.add_asset(asset3);

    std::cout << "Number of assets in portfolio: " << portfolio.get_num_assets() << std::endl;

    // Check if the portfolio has a certain asset type
    std::cout << "Portfolio has Stock: " << (portfolio.has_asset("Stock") ? "Yes" : "No") << std::endl;
    std::cout << "Portfolio has Cryptocurrency: " << (portfolio.has_asset("Cryptocurrency") ? "Yes" : "No") << std::endl;

    return 0;
}
