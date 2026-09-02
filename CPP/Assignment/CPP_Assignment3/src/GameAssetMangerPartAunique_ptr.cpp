/*
 * GameAssetMangerPartAunique_ptr.cpp
 *
 *  Created on: 02-Sep-2026
 *      Author: Nilesh
 */
#include<iostream> // user input output stream header file
#include<memory> // explicitly memory management with help of smart pointers

using namespace std;

class Texture {
private:
	string name;
	int width;
	int height;
public:
	Texture() {
		cout << "[Texture Loaded]" << endl;
	}
	Texture(string name, int width, int height) :
			name(name), width(width), height(height) {
		cout << "[Texture Loaded]" << endl;
	}

	void setName(const string &name) {
		this->name = name;
	}
	string getName() const {
		return name;
	}

	void setWidth(int width) {
		this->width = width;
	}
	int getWidth() const {
		return width;
	}
	void setHeight(int height) {
		this->height = height;
	}
	int getHeight() const {
		return height;
	}

	~Texture() {
		cout << "[Texture Released]" << endl;
	}
	void display() const {
		cout << getName() << " " << getWidth() << " " << getHeight() << endl;
	}
};

int main() {
//	Texture text1;
	auto text1 = make_unique<Texture>("player_spirit", 512, 512);
	text1->display();

	// unique_ptr<Texture> tex2 = tex1; // This is called copying and unque_ptr does not allowed it.
	//insteading we doing like this you can move ownership.

	unique_ptr<Texture> text2 = move(text1);
	cout << "tex1 is null: " << (text1 == nullptr ? "YES" : "NO") << endl;
	return 0;
}

