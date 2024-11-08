#include <iostream>
using namespace std;
//simple progam
int main()
{
	//const (fixed number)
	const double PI = 3.14159;
	double radius;
	double area;
	
	cout << "Enter circle radius: ";
	cin >> radius;
	area = PI * radius * radius;
	cout << "Area: " << area << endl;
	return 0;
	
}
