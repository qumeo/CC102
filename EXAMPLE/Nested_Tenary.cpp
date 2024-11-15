#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Enter Number: ";
	cin >> number;
	string result = (number > 0) ? "Positive" : ((number < 0) ? "Negative" : "Zero");
	cout << "The Number is " << result << endl;
	return 0;
	
}