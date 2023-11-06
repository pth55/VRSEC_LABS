// 5. Create a class person with the filed firstname, lastname. Use parameterized constructor to
// set the values to the variables at runtime. Create two sub classes Employee and Manager
// with the variables: Employee:eno, edept,esal , Manager: designation, msal. Create
// necessary methods in both the classes. Preferably parameterized for setting the data and
// default method for display the information. Create a subclass of Employee called
// Department with the variables dno, dname, experience. Set parameterized method for
// setting the data and display all the information.

#include <iostream>
using namespace std;

class Person {
protected:
	string firstname, lastname;
public:
	Person(string firstname, string lastname) {
		this->firstname=firstname, this->lastname=lastname;
	}
};

class Employee : public Person {
protected: string eno, edept, esal;
public:
	Employee(string firstname, string lastname, string eno, string edept, string esal):Person(firstname, lastname){
		this->eno = eno; this->edept = edept; this->esal = esal;
	}

	void display() {
		cout<<"Employee Information"<<endl;
		cout<<"FName: "<<firstname<<endl<<"LNAME: "<<lastname<<endl;
		cout<<"ENO: "<<eno<<endl<<"EDEPT: "<<edept<<endl;
		cout<<"ESAL: "<<esal<<endl<<endl;
	}
};

class Manager : public Person {
protected: string designation, msal;
public:
	Manager(string firstname, string lastname, string designation, string msal):Person(firstname, lastname) {
		this->designation = designation; this->msal=msal;
	}
	void display() {
		cout<<"Manager Information"<<endl;
		cout<<"FName: "<<firstname<<endl<<"LNAME: "<<lastname<<endl;
		cout<<"Designation: "<<designation<<endl<<"MSAL: "<<msal<<endl;
	}
};

class Department : public Manager {
protected: string dno, dname, exp;
public:
	Department(string dno, string dname, string exp, string firstname, string lastname, string designation, string msal):Manager(firstname, lastname, designation, msal) {
		this->dno = dno; this->dname = dname; this->exp=exp;
	}
	void display() {
		cout<<"Department Information"<<endl;
		cout<<"FName: "<<firstname<<endl<<"LNAME: "<<lastname<<endl;
		cout<<"Designation: "<<designation<<endl<<"MSAL: "<<msal<<endl;
		cout<<"Dname: "<<dname<<endl<<"DNO: "<<dno<<endl<<"Exp: "<<exp<<endl;
	}
};

int main() {
	Employee emp1("PAVAN", "BANDARU", "EMP-101", "CS/IT", "50K");
	Department dep1("DEPT-1", "CS/IT", "18", "PAVAN", "BANDARU", "SDE-II", "1L");
	emp1.display();
	dep1.display();
	return 0;
}