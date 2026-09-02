/*
 * GameAssetMangerPartBshared_ptr.cpp
 *
 *  Created on: 02-Sep-2026
 *      Author: Nilesh
 */

#include<iostream>
#include<memory>

using namespace std;

class Shader {
private:
	string name;
	string type;

public:
	Shader() {

	}
	Shader(string name, string type) :
			name(name), type(type) {
		cout << "[Shader Compiled]" << endl;
	}
	void setName(const string &name) {
		this->name = name;
	}
	string getName() const {
		return name;
	}

	void setType(const string &type) {
		this->type = type;
	}
	string getType() const {
		return type;
	}
	~Shader() {
		cout << "[Shader Destroyed]" << endl;
	}

	int getRefrenceCount(const shared_ptr<Shader> &shader) {
		return shader.use_count();
	}
};

int main() {

	auto shader = make_shared<Shader>("main_vert", "vertex");

	cout << "Ref_count: " << shader.use_count() << endl;
	{
		auto rederRef = shader;
		cout << "Ref_count: " << shader.use_count() << endl;

		auto editoRef = shader;
		cout << "Ref_count: " << shader.use_count() << endl;
	}
	cout << "Ref_count: " << shader.use_count() << endl;
	return 0;
}
