//============================================================================
// Name        : CPP_Assignment2.cpp
// Author      : Nilesh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<iomanip>
using namespace std;

class Product {

private:
	int productId;
	string name;
	double price;
	int quantity;
	int threshold;
public:
	Product() {
		productId = 0;
		name = "";
		price = 0.0;
		quantity = 0;
	}
	Product(int p, string n, double r, int q, int t) {
		productId = p;
		name = n;
		price = r;
		quantity = q;
		threshold = t;
	}
public:
	const string& getName() const {
		return name;
	}

	void setName(const string &name) {
		this->name = name;
	}

	double getPrice() const {
		return price;
	}

	void setPrice(double price) {
		this->price = price;
	}

	int getProductId() const {
		return productId;
	}

	void setProductId(int productId) {
		this->productId = productId;
	}

	int getQuantity() const {
		return quantity;
	}

	void setQuantity(int quantity) {
		this->quantity = quantity;
	}
	int getThreshold() const {
		return threshold;
	}
	void setThreshold(int threshold) {
		this->threshold = threshold;
	}
	void acceptDetails(); // Read all fields from user

	// Print formatted product info
	void displayDetails() const {

		cout << left
		         << setw(8) << getProductId()
		         << setw(15) << getName()
		         << setw(10) << getPrice()
		         << setw(8) << getQuantity()
		         << setw(15) << totalValue();
		 if (isLowStock(getThreshold()))
		    {
		        cout << " <- LOW STOCK";
		    }

		    cout << endl;
	}
	double totalValue() const {

		return getPrice() * getQuantity();   // price * quantity
	}

	// true if quantity < threshold
	bool isLowStock(int threshold) const {
		if (threshold > quantity) {
			return true;
		}
		return false;
	}
};
void Product::acceptDetails() {

	cout << "Enter product id" << endl;
	cin >> productId;
	cout << "Enter product name" << endl;
	cin >> name;
	cout << "Enter product price" << endl;
	cin >> price;
	cout << "Enter product quantity" << endl;
	cin >> quantity;
//	cout<< "Enter threshold value:"<<endl;
//	cin>> threshold;
	setProductId(productId);
	setName(name);
	setPrice(price);
	setQuantity(quantity);

}

int main() {

	int size;
	string name = "";
	string name2 ="";
	int threshold = 0;
	cout << "Size" << endl;
	cin >> size;
	Product p;
	Product prodArray[size];
	std::cout << std::fixed << std::setprecision(2);

	cout << "Enter the product details" << endl;
	for (int i = 0; i < size; i++) {
		prodArray[i].acceptDetails();
	}
	double highvalue = prodArray[0].getPrice();
	double lowValue = prodArray[0].getPrice();
	name = prodArray[0].getName();
	name2 = prodArray[0].getName();
	cout << "Enter threshold value" << endl;
	cin >> threshold;
	p.setThreshold(threshold);
	cout << "======================= INVENTORY REPORT =========================" << endl;
	cout << "ID      Name           Price      qty    Total Value            " << endl;
	for (int i = 0; i < size; i++) {
		prodArray[i].displayDetails();
		if (highvalue < prodArray[i].getPrice()) {
			highvalue = prodArray[i].getPrice();
			name = prodArray[i].getName();
		}
		if (lowValue > prodArray[i].getPrice()) {
			name2 = prodArray[i].getName();
		}
	}

	cout << "---------------------------------------" << endl;
	cout << "Highest Value Product :" << name << "(" << highvalue << ")"
			<< endl;
	cout << "Low Stock (threshold: " << threshold << "):"<<name2 << endl;

	delete[] prodArray;
	return 0;
}
