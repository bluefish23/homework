#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>
#include <string>
using namespace std;

namespace SavitchEmployees
{
	class Employee
	{
	public:
		Employee();
		Employee(const string& theName, const string& theSsn);
		string getName() const;
		string getSsn() const;
		double getNetPay() const;
		void setName(const string& newName);
		void setSsn(const string& newSsn);
		void setNetPay(double newNetPay);
		void printCheck() const;
	private:
		string name;
		string ssn;
		double netPay;
	};
} //SavitchEmployees
#endif //EMPLOYEE_Hagma once
