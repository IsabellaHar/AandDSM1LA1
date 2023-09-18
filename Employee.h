#pragma once
#include <iostream>
#include <string>

using std::string;


//The Employee class contains basic data and methods relating to employees.
class Employee
{
public:
	int employeeNumber;
	string firstName;
	string lastName;
	float salary; //annual figure

	//Constructor
	Employee(int employeeNum, string fname, string lname, float salary);

	//Destructor
	~Employee();

	//General methods

	void outputFullNameAndEmpNum() const;  //prints employee information in the console
	float calculateMonthlyPay();  //converts the annual salary to monthly pay 


};

