<<<<<<< HEAD
<<<<<<< HEAD
#include <iostream>
using namespace std;

int main()
{
	int sugarPriceUSD , ricePricePound , sardinesPricePound , coffeePriceUSD , milkPriceUSD;
    int sugarCostPHP , riceCostPHP , sardinesCostPHP, coffeeCostPHP , milkCostPHP;	
	int sugarCostUSD , riceCostPound , sardinesCostPound, coffeeCostUSD , milkCostUSD;
	int sugarQty , riceQty , sardinesQty , coffeeQty , milkQty;
	float usdToPhp , poundToPhp;
	
	cout << "-----------------Item name------------\n" "sugar\n" "rice\n" "sardines\n" "coffee\n" "milk\n" << endl;
	cout << "-------------Quantity purchased------\n";
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
	cout << "----------Price per item in USD/Pound--------\n";
	cout << "Price of sugar (usd): ";
	cin >> sugarPriceUSD;
	sugarCostUSD = sugarQty * sugarPriceUSD;
	cout << "Price of the rice (pound): ";
	cin >> ricePricePound;
	riceCostPound = riceQty * ricePricePound;
    cout << "Price of the sardines (Pound): ";
	cin >> sardinesPricePound;
	sardinesCostPound = sardinesQty * sardinesPricePound;
	cout << "Price of the coffee (usd): ";
	cin >> coffeePriceUSD;
	coffeeCostUSD = coffeeQty * coffeePriceUSD;
	cout << "Price of the milk (usd): ";
	cin >> milkPriceUSD;
	milkCostUSD = milkQty * milkPriceUSD;
	cout << "\n";
	cout << "-----The Total Cost per Item Converted in Php-----\n";
	cout << "Conversion Rate\n";
	cout << "Enter Conversion Rate for USD: ";
	cin >>  usdToPhp;
	cout << "Enter Conversion Rate for Pound: ";
	cin >>  poundToPhp;
	cout << "\n";
	cout << "--------------Price per item in PHP--------\n";
	sugarCostPHP = sugarCostUSD * usdToPhp;
	cout << "Price of sugar (Php): " << sugarCostPHP << endl;
	riceCostPHP = riceCostPound * poundToPhp;
	cout << "Price of the rice (Php): " << riceCostPHP << endl ;
	sardinesCostPHP = sardinesCostPound * poundToPhp;
	cout << "Price of the sardines (Php): " << sardinesCostPHP << endl ;
	coffeeCostPHP = coffeeCostUSD * usdToPhp;
	cout << "Price of the coffee (Php): " << coffeeCostPHP << endl;
	milkCostPHP = milkCostUSD * usdToPhp;
	cout << "Price of the milk (Php): " << milkCostPHP << endl;
	cout << "\n";
	int totalCostPHP = 	sugarCostPHP + riceCostPHP + sardinesCostPHP + coffeeCostPHP + milkCostPHP;
    cout << "Total amount to be paid in PHP: " << totalCostPHP;
	return 0;
}
=======
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
>>>>>>> e8e0ba3d6938e25ce4db825cb2bc812ecc563359
=======
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
>>>>>>> e8e0ba3d6938e25ce4db825cb2bc812ecc563359
