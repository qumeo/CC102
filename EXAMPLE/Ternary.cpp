#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Enter Number: ";
	cin >> number;
	string result = (number % 2 == 0) ? "Even" : "Odd";
	cout << result;
	return 0;
}
