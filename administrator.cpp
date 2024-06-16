#include <string>
#include <iostream>
#include "administrator.h"
using namespace std;

namespace SavitchEmployees
{
		Administrator::Administrator() :title("none"), responsibility("none"), supervisor("none"),annualsalary(0){}
		Administrator::Administrator(const string& theName, const string& theSsn,double salary)
		:SalariedEmployee(theName,theSsn,salary)
		{
			annualsalary = salary * 365.0 / 7.0;
		}
		void Administrator::setannualsalary(double newannualsalary)
		{
			annualsalary = newannualsalary;
		}
		double Administrator::getannualsalary() const
		{
			return annualsalary;
		}
		void Administrator::settitle(string newtitle)
		{
			title = newtitle;
		}
		string Administrator::gettitle() const
		{
			return title;
		}
		void Administrator::setresponsibility(string newresponsibity)
		{
			responsibility = newresponsibity;
		}
		string Administrator::getresponsibility() const
		{
			return responsibility;
		}
		void Administrator::setsupervisor(string newsupervisor)
		{
			supervisor = newsupervisor;
		}
		string Administrator::getsupervisor() const
		{
			return supervisor;
		}
		void Administrator::input()
		{
			string enteredTitle, enteredComArea, enteredSupervisor;

			cout << "Enter the administrator title: \n";
			cin >> enteredTitle;
			cout << "Enter the company area of responsibility: \n";
			cin >> enteredComArea;
			cout << "Entered the name of supervisor: \n";
			cin >> enteredSupervisor;

			settitle(enteredTitle);
			setresponsibility(enteredComArea);
			setsupervisor(enteredSupervisor);
		}
		void Administrator::print()
		{
			printCheck();
		}
		void Administrator::printCheck()
		{
			setNetPay(annualsalary);
			cout << "\n__________________________________________________\n";
			cout << "Pay to the order of " << getName() << endl;
			cout << "Administrator Title: " << title << endl;
			cout << "Company area of responsibility :" << responsibility << endl;
			cout << "Supervisor Name: " << supervisor << endl;
			cout << "The sum of " << getNetPay() << " Dollars\n";
			cout << "_________________________________________________\n";
			cout << "Check Stub NOT NEGOTIABLE \n";
			cout << "Employee Number: " << getSsn() << endl;
			cout << "Salaried Employee. Regular Pay: " << getSalary() << endl;
			cout << "Annual Salary: " << annualsalary << endl;
			cout << "_________________________________________________\n";
		}
}