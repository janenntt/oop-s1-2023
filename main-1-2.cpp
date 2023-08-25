#include <iostream>
#include "AssetPortfolio.h"
int main() {

AssetPortfolio a; 
AssetPortfolio b(5);
Asset m1(5, "a");
Asset m2(3, "b");
Asset m3(7, "c");
Asset m4(2, "d");
Asset m5(4, "e");
Asset m6(6, "f");
if (b.add_asset(m1)){
    cout << "Successfully add asset 1 to the portfolio. "  << endl; 
}
else
{
     cout << "Uncuccessfully add asset 1 to the portfolio. "  << endl; 
}
if (b.add_asset(m2)){
    cout << "Successfully add asset 2 to the portfolio. "  << endl; 
}
else
{
     cout << "Uncuccessfully add asset 2 to the portfolio. "  << endl; 
}
if (b.add_asset(m3)){
    cout << "Successfully add asset 3 to the portfolio. "  << endl; 
}
else
{
     cout << "Uncuccessfully add asset 3 to the portfolio. "  << endl; 
}
if (b.add_asset(m4)){
    cout << "Successfully add asset 4 to the portfolio. "  << endl; 
}
else
{
     cout << "Uncuccessfully add asset 4 to the portfolio. "  << endl; 
}
if (b.add_asset(m5)){
    cout << "Successfully add asset 5 to the portfolio. "  << endl; 
}
else
{
     cout << "Uncuccessfully add asset 5 to the portfolio. "  << endl; 
}
if (b.add_asset(m6)){
    cout << "Successfully add asset 6 to the portfolio. "  << endl; 
}
else
{
     cout << "Uncuccessfully add asset 6 to the portfolio. "  << endl; 
}
cout << "The asset portfolio has " << b.get_num_assets() << "assets. " << endl; 
if (b.has_asset("a")){
    cout<< "The asset portfolio has asset a" << endl;  
}
else {
    cout<< "The asset portfolio does not have asset a" << endl;  
}
Asset *h = b.get_assets(); 
for (int i = 0; i < b.get_num_assets(); i++){
    cout << "Asset " << i+1 << " has a value of "<< h[i].get_value() << endl; 
}
return 0; 
}