#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H
#include<iostream>
#include <string>
#include "salariedemployee.h"
using namespace std;

namespace SavitchEmployees
{
	class Administrator : public SalariedEmployee
	{
	public:
		Administrator();
		Administrator(const string& theName, const string& theSsn,double salary);
		void setannualsalary(double newannualsalary);
		double getannualsalary() const;
		void settitle(string newtitle);
		string gettitle() const;
		void setresponsibility(string newtesponsibity);
		string getresponsibility() const;
		void setsupervisor(string newsupervisor);
		string getsupervisor() const;
		void input();
		void print();
		void printCheck();
	protected:
		double annualsalary;
	private:
		string title;
		string responsibility;
		string supervisor;
	};
} //SavitchEmployees
#endif //administrator