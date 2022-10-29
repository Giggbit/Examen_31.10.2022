#pragma once
#include <iostream>
using namespace std;

class Expenses {
protected:
	double tax_expens;
	double purchase_expens;
	double food_expens;
	double entertainment_expens;

public:
	Expenses() {
		tax_expens = 0;
		purchase_expens = 0;
		food_expens = 0;
		entertainment_expens = 0;
	}
	Expenses(double te, double pe, double fe, double ee) {
		tax_expens = te;
		purchase_expens = pe;
		food_expens = fe;
		entertainment_expens = ee;
	}

	void PrintExpenses() {
		cout << "Tax costs: " << tax_expens << endl;
		cout << "Purchase costs: " << purchase_expens << endl;
		cout << "Food costs: " << food_expens << endl;
		cout << "Entertainment costs: " << entertainment_expens << endl;
	}

};

