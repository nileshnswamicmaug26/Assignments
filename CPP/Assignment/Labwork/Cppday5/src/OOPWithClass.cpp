/*
 * OOPWithClass.cpp
 *
 *  Created on: 28-Aug-2026
 *      Author: Nilesh
 */

#include<iostream>

using namespace std;

class Student {


	string name;
	int rollno;
	double marks;

public:
	void acceptDetails() {
		cout << "enter name :"<< endl;
		cin >> name;
		cout << "enter rollno :"<< endl;
		cin >>  rollno;
		cout  << "marks :"<< endl;
		cin >>  marks;
	}

	void displayDetails() {
		cout << "name   : "<< name<<endl;
		cout << "rollno : "<< rollno<<endl;
		cout  <<"marks  : "<< marks<<endl;
	}

};

int main() {

	Student s;  // object create in stack
	Student *s1 = new Student(); // object create in heap.
	s.acceptDetails();
	s.displayDetails();

	cout<<"Memory occupied : "<<sizeof(s)<<endl;

	return 0;
}
