/*
 * HRPayrollSystem.cpp
 *
 *  Created on: 29-Aug-2026
 *      Author: Nilesh
 */

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

class Employee {

private:
	int empId;
	string name;
	string department;
	char grade;
	double basicSalery;
	bool isActive=true;
	static int employeeCount;
	static int nexId;
public:

	Employee() {
		empId = nexId++;
		employeeCount++;
	}

	Employee(int empId, string &name, string &department, char grade,
			double basicSalery, bool isActive) {

		this->empId = empId;
		this->name = name;
		this->department = department;
		this->grade = grade;
		this->basicSalery = basicSalery;
		this->isActive = isActive;
	}

	int getEmpId() const {
		return empId;
	}

	const string& getName() const {
		return name;
	}

	void setName(const string &name) {
		if (!name.empty()) {
			this->name = name;
		} else {
			cout << "Invalid employee name" << endl;
		}
	}
	const string& getDepartment() const {
		return department;
	}

	void setDepartment(const string &department) {
		if (department == "Engineering" || department == "HR"
				|| department == "Finance" || department == "Operations") {
			this->department = department;
		} else {
			cout << department << " is not a registered department.";
		}
	}

	char getGrade() const {
		return grade;
	}

	void setGrade(char grade) {
		if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D') {
			this->grade = grade;
		} else {
			cout << "Invalid grade " << grade << " Accepted values: A, B, C, D."
					<< endl;
		}
	}

	double getBasicSalery() const {
		return basicSalery;
	}

	void setBasicSalery(double basicSalery) {
		if (basicSalery > 10000 && basicSalery < 500000) {
			this->basicSalery = basicSalery;
		} else {
			cout
					<< "Salary must be between Rs.<<10,000 and Rs.5,00,000. Value rejected."
					<< endl;
		}
	}

	bool getisIsActive() const {
		return isActive;
	}

	void setIsActive(bool isActive) {
		this->isActive = isActive;
	}

	void acceptDetails() {
		cout << "===========Enter Employee Details===========" << endl;
		cout << "Employee name:" << endl;
		cin >>name ;
		setName(name);
		cout << "Department" << endl;
		cin >> department;
		setDepartment(department);
		cout << "Employee grade" << endl;
		cin>>grade;
		setGrade(grade);
		cout << "Employee basic Salery" << endl;
		cin >> basicSalery;
		setBasicSalery(basicSalery);
	}
	void printPayslip();
	double computeAllowances() {
		switch (getGrade()) {
		case 'A':
			return getBasicSalery() * 0.40;
		case 'B':
			return getBasicSalery() * 0.30;
		case 'C':
			return getBasicSalery() * 0.20;
		case 'D':
			return getBasicSalery() * 0.10;
		default:
			return 0;
		}
	}
	double computeGrossSalary() {
		return getBasicSalery() + computeAllowances();
	}
	double computeTax() {
		double grosSal = computeGrossSalary();
		if (grosSal <= 50000) {
			return 0;
		} else if (grosSal >= 50000 && grosSal <= 100000) {
			return (grosSal - 50000) * 0.10;
		} else {
			return 5000 + (grosSal - 50000) * 0.20;
		}
	}
	double computeNetSalary() {
		return computeGrossSalary() - computeTax();
	}
	void deactivate() {
		isActive = false;
	}
	static int getEmployeeCount() {
		return employeeCount;
	}
};
int Employee::nexId = 1001;
int Employee::employeeCount = 0;

void Employee::printPayslip() {
	cout << "============================================" << endl;
	cout << "          EMPLOYEE PAYSLIP — AUG 2026       " << endl;
	cout << "============================================" << endl;
	cout << "Emp Id      : " << getEmpId() << "              " << endl;
	cout << "Name        : " << getName() << "              " << endl;
	cout << "Department  : " << getDepartment() << "         " << endl;
	cout << "Grade       : " << getGrade() << "              " << endl;
	cout << "Status      : " << (getisIsActive()?"Active":"Inactive")<< "              " << endl;
	cout << "--------------------------------------------" << endl;
	cout << "Basic Salary    : Rs." << getBasicSalery() << endl;
	cout << "Allowances(%30) : Rs." << computeAllowances() << endl;
	cout << "Gross Salary    : Rs." << computeGrossSalary() << endl;
	cout << "--------------------------------------------" << endl;
	cout << "Tax Deduction   : Rs." << computeTax() << endl;
	cout << "NetSalery       : Rs." << computeNetSalary() << endl;
	cout << "============================================" << endl;

}
int main() {

	Employee e1;
	Employee *e2 = new Employee();
	Employee *e3 = new Employee();
	std::cout << std::fixed << std::setprecision(2);
	e1.acceptDetails();
	e2->acceptDetails();
	e3->acceptDetails();

	e1.printPayslip();
	e2->printPayslip();
	e3->printPayslip();
	// Simulate a resignation
	e3->deactivate();
	if (!e3->getisIsActive())
		cout << e3->getName() << " is no longer active. Payroll skipped."
				<< endl;
	cout << "Total Employees : " << Employee::getEmployeeCount() << endl;
	delete e2;
	delete e3;
	return 0;
}
