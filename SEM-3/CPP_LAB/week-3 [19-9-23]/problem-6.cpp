// 6. Write a c++ program that gets the complete property of both his father and mother to their son. Using object as an argument

#include <iostream>
using namespace std;

class Person {
private:
	int income;
public:
	void setIncome() {
		cout<<"Enter Income: ";
		cin>>income;
	}
	void getIncome() { cout<<"Income: "<<income<<endl; }

	Person addIncome(Person p1, Person p2) {
		Person temp;
		temp.income = p1.income + p2.income;
		return (temp);
	}
};

int main()
{
	Person p1, p2, p3;
	p1.setIncome();
	p2.setIncome();
	p3 = p3.addIncome(p1, p2);
	p1.getIncome();
	p2.getIncome();
	p3.getIncome();
	return 0;
}