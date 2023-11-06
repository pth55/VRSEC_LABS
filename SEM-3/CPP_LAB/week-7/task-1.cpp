// 1.write a cpp program to copy the values of one object to other using copy constructor

#include <iostream>
using namespace std;
class Employee {
	private:
		int empID;
		string empName, empAddr;
	public:
		Employee(int empID, string empName, string empAddr){
			this->empID=empID, this->empName=empName, this->empAddr=empAddr;
		}

		void display() {
			cout<<"Employee Info\n";
			cout<<"=============\n";
			cout<<"Employee ID     : "<<this->empID<<endl;
			cout<<"Employee Name   : "<<this->empName<<endl;
			cout<<"Employee Address: "<<this->empAddr<<endl<<endl;
		}
};

int main()
{
	Employee emp1(111, "B PAVAN", "ONGOLE");
	Employee emp2(emp1);

	emp1.display();
	emp2.display();
	return 0;
}