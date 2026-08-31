/*
 * HospitalPatientRegistry.cpp
 *
 *  Created on: 31-Aug-2026
 *      Author: Nilesh
 */
#include<iostream>

using namespace std;

class Patient {
private:
	int patientId;
	string name;
	int age;
	string ward;
	const string bloodGroup;
public:
	Patient() :
			patientId(0), name(""), age(0), ward(""), bloodGroup("O+") {
		cout << "[Constructor] Default patient registered." << endl;
	}

	Patient(int patientId, string name) :
			patientId(patientId), name(name), age(0), ward("Emergeny"), bloodGroup(
					"O+") {
		cout << "[Constructor] Emergency : " << name << endl;
	}
	Patient(int patientId, string name, int age, string ward,const string bloodGroup) :
			patientId(patientId), name(name), age(age), ward(ward), bloodGroup(
					bloodGroup) {
		cout << "[Constructor] Full admission : " << name << endl;
	}

	int getAge() const {
		return age;
	}

	void setAge(int age) {
		this->age = age;
	}

	const string& getBloodGroup() const {
		return bloodGroup;
	}

	const string& getName() const {
		return name;
	}

	void setName(const string &name) {
		this->name = name;
	}

	int getPatientId() const {
		return patientId;
	}

	void setPatientId(int patientId) {
		this->patientId = patientId;
	}

	const string& getWard() const {
		return ward;
	}

	void setWard(const string &ward) {
		this->ward = ward;
	}

	~Patient() {
		cout << "[Destructor] Patient " << name << " discharged" << endl;
	}

	void displayRecord() const {
		cout<<endl;
		cout << "Patient Record:" << endl;
		cout << "ID        :  " << patientId << endl;
		cout << "Name      :  " << name << endl;
		cout << "Age       :  " << age << endl;
		cout << "Ward      :  " << ward << endl;
		cout << "Blood Grp :  " << bloodGroup << endl;
		cout<<endl;
	}
	void transferWard(const string &newWard) {

		cout << "Ward Transfer:  " << name <<"->"<<newWard<< endl;
		cout<<endl;

	}

};

int main() {
	Patient p(101,"Meera Joshi",34,"Cardiology","B+");
	Patient p1(102,"Raj Patel");
	Patient p2();

	Patient *pt = new Patient[4];

	p.displayRecord();

	p1.transferWard("ICU");

	delete[] pt;
	return 0;
}
