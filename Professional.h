#pragma once
#include "iostream"
#include "Employee.h"

using namespace std;

// this is the derived class of the base class and has access to the public parts of employee class.
class Professional : public Employee {
public:
	double insuranceTakeout;
	double insurancePercent = .1;
	// this function outputs the vacation days for a professional employee, it is set to 20 days because thats how many all professional employees get.
	double vacationDays() {
		cout << "You have 20 vacation days this year." << "\n";
		return 0;
	}
	// this function finds the health insurance rate depending on if the employee made over 500 dollars in the week.
	double healthInsurance() {
		if (weeklySalary > 500) {
			insuranceTakeout = (weeklySalary * insurancePercent);
			cout << "Your health insurance cost is: " << insuranceTakeout << "\n";
		}
		// this else statement is for if the employee did not make over 500 dollars in a week.
		else {
			insuranceTakeout = 0;
			cout << "Your health insurance cost is: " << insuranceTakeout << "\n";
		}
		return 0;
	}
};