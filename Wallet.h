#pragma once
#include <iostream>
using namespace std;

class Wallet {
private:
	string name;
	string surname;
	string number;

public:
	Wallet() = default;
	Wallet(string n, string s, string num) {
		name = n;
		surname = s;
		number = num;
	}
	
	string getNumberOfWallet() {
		return number;
	}

	void Input() {
		cout << endl;
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter surname: ";
		cin >> surname;
		cout << "Enter number of wallet: ";
		cin >> number;
		cout << endl;
	}
	void Print() {
		cout << "Name: " << name << endl;
		cout << "Surname: " << surname << endl;
		cout << "Number of wallet: " << number << endl;
	}

};

