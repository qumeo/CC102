#include <iostream>
using namespace std;

int main()
{
	//getline(whitespce)
	int id , score;
	string name;
	cout << "Enter student name: ";
	getline(cin, name);
	cout << "Student name: " << name << endl;
	cout << "Enter student ID and score: ";
    cin >> id >> score;
	cout << "Student ID: " << id << " score: " << score << endl;
	return 0;
	
}