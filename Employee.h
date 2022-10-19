#pragma once
#include "iostream"

using namespace std;
// the abstract class employee is the starting object that stores variables and functions used in the other classes and main program.
class Employee {
public: // the info in this class is all public to allow the other classes to easily access the info in this class.
	// the to lines of code under this comment are the virtual functions that are used in both the professional and nonprofessional classes.
	virtual double vacationDays() = 0;
	virtual double healthInsurance() = 0;
	double hourlyRate;
	double hoursWorked;
	double weeklySalary;
	char employee_name[30];

	// this function stores the details of the employee.
	void employeeDetails() {
		cout << "Employee Name: ";
		cin >> employee_name;
		cout << "Hourly Rate: ";
		cin >> hourlyRate;
		cout << "Hours Worked This Week: ";
		cin >> hoursWorked;
	}
	// this function takes the input from employeeDetails and finds the weekly salary of the user.
	void findWeeklySalary() {
		weeklySalary = hourlyRate * hoursWorked;
		cout << weeklySalary << "\n";
	}

};