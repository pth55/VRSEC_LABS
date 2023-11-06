// write a c++ programme to generate a series starting with 1 and the second number is 2 and the third number is the average of previous two numbers.

#include<iostream>
using namespace std;

int main() {
	int n;
	cout<<"Enter a Number: ";
	cin>>n;
	float a = 1, b = 2, c = (a+b)/2;
	cout<<"Series: "<<a<<" "<<b<<" "<<c;
	for(int i = 3; i<=n; i++) {
		a = b;
		b = c;
		c = (a+b)/2;
		cout<<" "<<c;
	}
	return 0;
}
