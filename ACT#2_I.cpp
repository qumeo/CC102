#include <iostream>
using namespace std;

int main()
{
char firsmbol, secombol, thirmbol;
cout << "Enter 1st symbol: ";
cin >> firsmbol;
cout << "Enter 2nd symbol: ";
cin >> secombol;
cout << "Enter third symbol: ";
cin >> thirmbol;
for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 10; j++) {
			cout << " ";
		}
		for(int j = 0; j < i; j++) {
			cout << firsmbol;
		}
		for(int j = 0; j < 1; j++) {
			cout << secombol;
		}
		cout << endl;
	}
	for(int i = 0; i < 2; i++) {
		for (int j = 0; j < 10; j++) {
			cout << thirmbol;
		}
		for(int j = 0; j < 5; j++) {
			cout << firsmbol;
		}
		for (int j = 0; j < 1; j++) {
			cout << secombol;
		}
		cout << endl;
	}

	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 10; j++) {
			cout << " ";
		}
		for(int j = i; j < 4; j++) {
			cout << firsmbol;
		}
		for(int j = 0; j < 1; j++) {
			cout << secombol;
		}
		cout << endl;
	}
	return 0;
}
