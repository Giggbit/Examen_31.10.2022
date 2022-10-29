#pragma once
#include <iostream>
#include <string>
using namespace std;

class BankCard {
protected:
	string name;
	string surname;
	string bank_name;
	string number;
	string end_date;
	int cvv;

public:
	BankCard() = default;
	BankCard(string n, string s, string bn, string num, string ed, int cvv) {
		name = n;
		surname = s;
		bank_name = bn;
		number = num;
		this->cvv = cvv;
		end_date = ed;
	}
	BankCard(BankCard& obj) {
		name = obj.name;
		surname = obj.surname;
		bank_name = obj.bank_name;
		number = obj.number;
		cvv = obj.cvv;
		end_date = obj.end_date;
	}

	void InputCard() {
		cout << endl;
		cout << "Enter your name: ";
		cin >> name;
		cout << "Enter your surname: ";
		cin >> surname;
		cout << "Enter name of bank: ";
		cin >> bank_name;
		cout << "Enter number of your card: ";
		cin >> number;
		cout << "Enter date: ";
		cin >> end_date;
		cout << "Enter your cvv code: ";
		cin >> cvv;
		while (cvv < 100 || cvv > 999) {
			cvv = 0;
			cout << "\nError\nEnter again: ";
			cin >> cvv;
		}
	}
	void PrintCard() {
		cout << "Name: " << name << endl;
		cout << "Surname: " << surname << endl;
		cout << "Bank: " << bank_name << endl;
		cout << "Card number: " << number << endl;
		cout << "CVV code: " << cvv << endl;
		cout << "Date: " << end_date << endl;
	}

};

