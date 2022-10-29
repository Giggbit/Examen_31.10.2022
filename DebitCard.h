#pragma once
#include <iostream>
#include "BankCard.h"
#include "Expenses.h"
using namespace std;

class DebitCard : public BankCard, public Expenses {
private:
	int bank_account;
	long balance_account;

public:
	DebitCard() : BankCard() {
		bank_account = 0;
		balance_account = 0;
	}
	DebitCard(int ba, long am, string n, string s, string bn, string num, string ed, int cvv) : BankCard(n, s, bn, num, ed, cvv) {
		bank_account = ba;
		balance_account = am;
	}

	void TaxCosts() {
		int answer;
		cout << "Enter amount of money spent of tax: ";
		cin >> answer;
		tax_expens += answer;
		balance_account -= tax_expens;
	}
	void PurchasesCosts() {
		int answer;
		cout << "Enter amount of money spent of purchase: ";
		cin >> answer;
		purchase_expens += answer;
		balance_account -= purchase_expens;
	}
	void FoodCosts() {
		int answer;
		cout << "Enter amount of money spent of food: ";
		cin >> answer;
		food_expens += answer;
		balance_account -= food_expens;
	}
	void EntertainmentCosts() {
		int answer;
		cout << "Enter amount of money spent of entertainment: ";
		cin >> answer;
		entertainment_expens += answer;
		balance_account -= entertainment_expens;
	}

	string NumberOfCard() {
		return number;
	}
	double getTaxExpens() {
		return tax_expens;
	}
	double getPurchasesExpens() {
		return purchase_expens;
	}
	double getFoodExpens() {
		return food_expens;
	}
	double getEntertainmentExpens() {
		return entertainment_expens;
	}

	void Input() {
		InputCard();
		cout << "Enter bank account: ";
		cin >> bank_account;
		cout << "Enter balance account: ";
		cin >> balance_account;
		while (balance_account > bank_account) {
			balance_account = 0;
			cout << "\nError\nEnter again: ";
			cin >> balance_account;
		}
		cout << endl;
	}
	void Print() {
		PrintCard();
		cout << "Bank account: " << bank_account << endl;
		cout << "Balance account: " << balance_account << endl;
	}

};

