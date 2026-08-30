/*
 * PartBFunctionOverloading.cpp
 *
 *  Created on: 31-Aug-2026
 *      Author: Nilesh
 */

#include<iostream>
#include<iomanip>
using namespace std;

double reorderCost(int qty, double unitPrice) {
	return qty * unitPrice;
}
// integer quantity
double reorderCost(double qty, double unitPrice) {
	return qty * unitPrice;
}
// fractional (by weight)
double reorderCost(int qty, double unitPrice, double taxRate) {
	double cost = qty * unitPrice;
	double tax = cost * taxRate / 100;

	return cost + tax;
}
double applyDiscount(double price, double discountPercent = 10.0) {
	return price - (price * discountPercent / 100);
}
int main() {
	int qty;
	double qty2;
	double unitPrice;
	double taxRate;
	double price;
	double disprice;

	cout << fixed << setprecision(2) << endl;
	cout << "Enter quantity" << endl;
	cin >> qty;
	cout << "Enter unitPrice" << endl;
	cin >> unitPrice;

	double intqyt = reorderCost(qty, unitPrice);
	cout << "intqyt : " << intqyt << endl;

	cout << "Enter quantity2" << endl;
	cin >> qty2;

	double fractionweight = reorderCost(qty2, unitPrice);
	cout << "Fraction Weight  : " << fractionweight << endl;

	cout << "Enter taxRate" << endl;
	cin >> taxRate;

	double tax = reorderCost(qty, unitPrice, taxRate);
	cout << "Tax : " << tax << endl;

	cout << "Enter price" << endl;
	cin >> price;

	double fixdiscount = applyDiscount(price, 10.0);
	cout << "fixdiscount : " << fixdiscount << endl;

	cout << "Enter disprice" << endl;
	cin >> disprice;
	double disdcount = applyDiscount(price, disprice);
	cout << "disdcount : " << disdcount << endl;

	return 0;
}

