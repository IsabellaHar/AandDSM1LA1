// SimpleClassProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Employee.h"

using std::cout, std::endl;


int main()
{
    Employee emp1(12345, "Isabella", "Harbour", 100000.01);
    Employee emp2(234, "Billy", "Jacobson", 75000.90);

    emp1.outputFullNameAndEmpNum();
    float monthlyPay = emp1.calculateMonthlyPay();
    cout << "Monthly pay $" << monthlyPay << "\n";

    emp2.outputFullNameAndEmpNum();
    monthlyPay = emp2.calculateMonthlyPay();
    cout << "Monthly pay $" << monthlyPay << endl;

    cout << "The End.";

    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
