#include <iostream>
#include "Employee.h"
#include "Professional.h"
#include "Nonprofessional.h"

using namespace std;

int main() {
	// these 3 lines of code ask the user if they are a professional or nonprofessional employee and asks them to input a 1 or 0.
	int question;
	cout << "Enter a 0 if you are a Professional Employee, enter a 1 if you are a Nonprofessional Employee.\n";
	cin >> question;



	// this if statement is evaluating if the user input 0 and implements the employee and professional classes.
	if (question == 0) {
		Employee* e;    // this is pointing to the abstract employee class and storing it in e.
		Professional p; // this is the same as the one above but doesnt need a pointer because it is not abstract.
		e = &p;    // this assigns the object professional to employee pointer.
		// the next 4 lines of code implement functions made in the employee class with the bottom 2 being virtual functions.
		e->employeeDetails();  
		e->findWeeklySalary();
		e->vacationDays();
		e->healthInsurance();
		return 0;
	}
	// this else if statement evaluates if the user input 1 and implements the employee and nonprofessional classes.
	else if (question == 1) {
		Employee* e;       // this is pointing to the abstract employee class and storing it in e.
		Nonprofessional n; // this is the same as the one above but doesnt need a pointer because it is not abstract.
		e = &n;       // this assigns the object nonprofessional to employee pointer.
		// the next 4 lines of code implement functions made in the employee class with the bottom 2 being virtual functions.
		e->employeeDetails();
		e->findWeeklySalary();
		e->vacationDays();
		e->healthInsurance();
		return 0;
	}
	// this else statement evaluates if the user input something other than a 1 or 0.
	else {
		cout << "Invalid Input.";
	}
}