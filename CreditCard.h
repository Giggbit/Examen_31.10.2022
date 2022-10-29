#pragma once
#include <iostream>
#include "BankCard.h"
#include "Expenses.h"
using namespace std;

class CreditCard : public BankCard, public Expenses{
private:
	int credit_limite;
	double amount_money;

public:
	CreditCard() : BankCard() {
		credit_limite = 0;
		amount_money = 0;
	}
	CreditCard(int cl, double am, string n, string s, string bn, string num, string ed, int cvv) : BankCard(n, s, bn, num, ed ,cvv) {
		credit_limite = cl;
		amount_money = am;
	}
	
	void TaxCosts() {
		int answer;
		cout << "Enter amount of money spent of tax: ";
		cin >> answer;
		tax_expens += answer;
		amount_money -= tax_expens;
	}
	void PurchasesCosts() {
		int answer;
		cout << "Enter amount of money spent of purchase: ";
		cin >> answer;
		purchase_expens += answer;
		amount_money -= purchase_expens;
	}
	void FoodCosts() {
		int answer;
		cout << "Enter amount of money spent of food: ";
		cin >> answer;
		food_expens += answer;
		amount_money -= food_expens;
	}
	void EntertainmentCosts() {
		int answer;
		cout << "Enter amount of money spent of entertainment: ";
		cin >> answer;
		entertainment_expens += answer;
		amount_money -= entertainment_expens;
	}

	string NumberOfCard() {
		return number;
	}
	/*double getAmountOfMoney() {
		return amount_money;
	}*/
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
		cout << "Enter credit limite: ";
		cin >> credit_limite;
		cout << "Enter balance account: ";
		cin >> amount_money;
		while (amount_money > credit_limite) {
			amount_money = 0;
			cout << "\nError\nEnter again: ";
			cin >> amount_money;
		}
		cout << endl;
	}
	void Print() {
		PrintCard();
		cout << "Credit limite: " << credit_limite << endl;
		cout << "Account balance: " << amount_money << endl;
	}



};

