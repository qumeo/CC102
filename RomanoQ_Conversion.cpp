#include <iostream>
using namespace std;

int main()
{
	string userconversion;
	int usercurrency;
	float totalcurrency;
    float usdcurrency=0.018 , phpcurrency=55.96;
	cout << "Enter Number for conversion (1.phptousd 2.usdtophp): ";
	cin >> userconversion;
	if (userconversion == "1"){
		cout << "Enter Amount of Currency: ";
		cin >> usercurrency;
		totalcurrency = usdcurrency*usercurrency;
	}
	else if (userconversion == "2"){
		cout << "Enter Amount of Currency: ";
		cin >> usercurrency;
		totalcurrency = phpcurrency*usercurrency;
	}
	cout << "Converted Currency: " << totalcurrency;
	return 0;			
}