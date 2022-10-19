#pragma once
#include "iostream"
#include "Employee.h"

using namespace std;
// this is a derived class nonprofessional of the employee class and it has access to the public parts of the employee class.
class Nonprofessional : public Employee {
public:
	double vacationHours;
	double insuranceTakeout2;
	double insurancePercent2 = .05;
	// this function finds the amount of vacation hours the nonprofessional employee has earned in 1 week. It uses the virtual function vacationDays.
	double vacationDays() {
		if (hoursWorked > 35) {
			vacationHours = 1;
		}
		// this else statement is for if the employee didnt work over 35 hours in one week.
		else {
			vacationHours = 0;
		}
		cout << "You have earned " << vacationHours << " vacation hours." << "\n";
		return 0;
	}
	// this is the function to find the health insurance rate of a nonprofessional employee and it utilizes the healthInsurance virtual function.
	double healthInsurance() {
		if (weeklySalary > 300) {
			insuranceTakeout2 = (weeklySalary * insurancePercent2);
			cout << "Your health insurance cost is: " << insuranceTakeout2 << "\n";
		}
		// this else statement is for if the employee made under 300 dolllars.
		else {
			insuranceTakeout2 = 0;
			cout << "Your health insurance cost is: " << insuranceTakeout2 << "\n";
		}
		return 0;
	}
};