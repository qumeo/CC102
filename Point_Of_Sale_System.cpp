#include <iostream>
using namespace std;

int main()
{
	int sugarPriceUSD , ricePricePound , sardinesPricePound , coffeePriceUSD , milkPriceUSD;
    int sugarCostPHP , riceCostPHP , sardinesCostPHP, coffeeCostPHP , milkCostPHP;	
	int sugarCostUSD , riceCostPound , sardinesCostPound, coffeeCostUSD , milkCostUSD;
	int sugarQty , riceQty , sardinesQty , coffeeQty , milkQty;
	float usdToPhp = 57.48 , poundToPhp = 62.82;
	
	cout << "Item name:\n" "sugar\n" "rice\n" "sardines\n" "coffee\n" "milk\n" << endl;
	cout << "Quantity purchased\n";
	cout << "Quantity of the sugar: ";
	cin >> sugarQty;
	cout << "Quantity of the rice: ";
	cin >>riceQty;
	cout << "Quantity of the sardines: ";
	cin >> sardinesQty;
	cout << "Quantity of the coffee: ";
	cin >> coffeeQty;
	cout << "Quantity of the milk: ";
	cin >> milkQty;
	cout << "\n";
	cout << "Price per item in PHP\n";
	cout << "Price of sugar (usd): ";
	cin >> sugarPriceUSD;
	sugarCostUSD = sugarQty * sugarPriceUSD;
	cout << "Price of the rice (pound): ";
	cin >> ricePricePound;
	riceCostPound = riceQty * ricePricePound;
    cout << "Price of the sardines: ";
	cin >> sardinesPricePound;
	sardinesCostPound = sardinesQty * sardinesPricePound;
	cout << "Price of the coffee (usd): ";
	cin >> coffeePriceUSD;
	coffeeCostUSD = coffeeQty * coffeePriceUSD;
	cout << "Price of the milk (usd): ";
	cin >> milkPriceUSD;
	cout << "\n";
	milkCostUSD = milkQty * milkPriceUSD;
	sugarCostPHP = sugarCostUSD * usdToPhp;
	riceCostPHP = riceCostPound * poundToPhp;
	sardinesCostPHP = sardinesCostPound * poundToPhp;
	coffeeCostPHP = coffeeCostUSD * usdToPhp;
	milkCostPHP = milkCostUSD * usdToPhp;
	int totalCostPHP = 	sugarCostPHP + riceCostPHP + sardinesCostPHP + coffeeCostPHP + milkCostPHP;
    cout << "Total amount to be paid in PHP: " << totalCostPHP;
	return 0;
}
