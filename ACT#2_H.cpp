#include <iostream>
using namespace std;

int main()
{
	char firsmbol, secombol;
	cout << "Enter 1st symbol: ";
	cin >> firsmbol;
	cout << "Enter 2nd symbol: ";
	cin >> secombol;
	for (int i = 0; i <= 6; i++){
		for (int j = 0; j < i; j++){
			cout << " " << firsmbol;
		}
		cout << " " << secombol << endl;
	}
	for (int i = 6; i >= 0; i--){
		for (int j = 0; j < i; j++){
			cout << " " << firsmbol;
		}
		cout << " " << secombol << endl;
	}
	return 0;
}
