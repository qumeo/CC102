#include <iostream>
using namespace std;

int main()
{
	//decisionmaking
	char choice;
    cout << "Is it raining? [y/n] ";
	cin >> choice;
	//ifit'sraining(first choice)
	if(choice == 'y'){
		cout << "Get an umbrella!";	
	}
	//or else if, if it's not raining(make another decision)
	else if(choice == 'n'){
		cout << "Get some sun anemic!";
	}
	return 0;
}