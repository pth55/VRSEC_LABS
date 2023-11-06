// Write a c++ program to caluculate net salary of the employe  with constructor
// Input:
// 		DA,HRA,IT(INCOME TAX),BASIC
// 		DA=20% of basic HRA=5% of basic IT=2% of basic

#include <iostream>
using namespace std;

class Employee {
private:
	double basic_sal, da, it, hra, net_sal;
	void Calculate();
public:
	Employee() {
		cout<<"Enter Basic Salary: ";
		cin>>basic_sal;
	}

	// Employee(double basic_sal) {
	// 	this->basic_sal = basic_sal;
	// }

	void Display();
};

void Employee::Calculate() {
	da = basic_sal*20/100;
	hra = basic_sal*5/100;
	it = basic_sal*2/100;
 	net_sal = (basic_sal + da + hra) - it;
}

void Employee::Display() {
	Calculate();
	cout<<endl<<"Employee Information"<<endl;
	cout<<"--------------------"<<endl;
	cout<<"Basic Salary: "<<basic_sal<<endl;
	cout<<"DA          : "<<da<<endl;
	cout<<"HRA         : "<<hra<<endl;
	cout<<"IT          : "<<it<<endl;
	cout<<"Net Salary  : "<<net_sal<<endl;
}

int main() {
	Employee emp;
	emp.Display();
	return 0;
}