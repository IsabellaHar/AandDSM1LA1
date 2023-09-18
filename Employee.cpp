#include "Employee.h"
#include <iostream>
#include <string>

using std::cout;

//Constructor
Employee::Employee(int employeeNum, string fname, string lname, float salary) {
	this->employeeNumber = employeeNum;
	this->firstName = fname;
	this->lastName = lname;
	this->salary = salary;
}

//Destructor
Employee::~Employee() {}




//General Methods


void Employee::outputFullNameAndEmpNum() const {
	cout << this->firstName << " " << this->lastName << " " << this->employeeNumber << "\n";
	return;
}

float Employee::calculateMonthlyPay()
{
	float monthlyPay = this->salary / 12;
	return monthlyPay;
}