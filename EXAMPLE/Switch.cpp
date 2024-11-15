#include <iostream>
using namespace std;

int main()
{
	int grade;
	cout << "Enter Grade: ";
	cin >> grade;
	switch(grade){
		case 100 : cout << "Equivalent is A."; break;
		case 99 : cout << "Euivalent is B."; break;
		case 98 : cout << "Equivalent is C."; break;
		case 97 : cout << "Equivalent is D."; break;
		case 96 : cout << "Equivalent is E."; break;
		case 95 : cout << "Equivalent is F."; break;
		case 94 : cout << "Equivalent is G."; break;
		case 93 : cout << "Equivalent is H."; break;
		case 92 : cout << "Equivalent is I."; break;
		case 91 : cout << "Equivalent is J."; break;
		case 90 : cout << "Equivalent is K."; break;
	}
	return 0;
}
