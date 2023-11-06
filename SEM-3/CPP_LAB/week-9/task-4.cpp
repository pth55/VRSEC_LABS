// 4. Create a class named person with the variables name, address, age, gender and a method
// display() to show the employee details. Derive a new class employee with datamembers
// deptid and designation and display the complete details.

#include <iostream>
using namespace std;

class Person {
protected:
	string name, addrs, age, gender;
public:
	Person(string name, string addrs, string age, string gender) {
		this->name = name; this->addrs = addrs;
		this->age = age; this->gender = gender;
	}

	void display() {
		cout<<"Person Information"<<endl;
		cout<<"Name: "<<name<<endl<<"Address: "<<addrs<<endl;
		cout<<"Age: "<<age<<endl<<"Gender: "<<gender<<endl<<endl;
	}
	
};

class Employee : public Person {
protected: string deptID;
public:
	Employee(string name, string addrs, string age, string gender, string deptID):Person(name, addrs, age, gender){
		this->deptID = deptID;
	}

	void display() {
		cout<<"Employee Information"<<endl;
		cout<<"Name: "<<name<<endl<<"Address: "<<addrs<<endl;
		cout<<"Age: "<<age<<endl<<"Gender: "<<gender<<endl;
		cout<<"Dept.: "<<deptID<<endl<<endl;
	}
};

int main() {
	Person p1("PRAVEEN", "HYD", "18", "MALE");
	p1.display();
	Employee emp1("PAVAN", "VIJ", "19", "MALE", "IT-A");
	emp1.display();
	return 0;
}