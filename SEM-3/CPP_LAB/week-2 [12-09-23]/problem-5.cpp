// 5.	write a c++ program to caluculate simple intrest and compound intrest
// 		Input: Principle amount,rate of intrest and time. using the help of constructor overloading

// SI = PTR/100
// CI = [P(1+R/100)^T] - P

#include <iostream>
#include <math.h>
using namespace std;

class Intrest {
private:
	int amount, time;
	int rate;
	int simpleIntrest();
	double compoundIntrest();
public:
	Intrest() {
		cout<<"Enter Details:"<<endl;
		cout<<"Amount   : ";
		cin>>amount;
		cout<<"Time     : ";
		cin>>time;
		cout<<"Rate of I: ";
		cin>>rate;
	}

	Intrest(int amount, int time, int rate) {
		this->amount = amount;
		this->time = time;
		this->rate = rate;
	}

	void Display() {
		cout<<"Simple Intrest   : "<<simpleIntrest()<<endl;
		cout<<"Compound Intrest : "<<compoundIntrest();
	}
};

int Intrest::simpleIntrest() {
	return (amount*time*rate)/100;
}

double Intrest::compoundIntrest() {
	return (amount*((pow((1+rate/100), time)))) - amount;
}

int main() {
	Intrest i1(10000, 7, 6);
	i1.Display();
	return 0;
}

// Compound interest for 10,000 with ROI 6.25% for 7 years and calculating interests quarterly, is: 5436
// Total amount is: 15436