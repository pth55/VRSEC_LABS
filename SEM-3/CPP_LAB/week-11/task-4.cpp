// Write a cpp program for catch all exceptions.
#include <iostream>
#include <stdexcept>
using namespace std;

class A {};
class B {};
class C {};

int main() {
	int opt;
	try{
		cout<<"Choose an Option"<<endl<<"1. getName\t2. getAge\t3. getGrade\n";
		cin>>opt;
		if(opt == 1) {throw A();}
		else if (opt == 2){throw B();}
		else if (opt == 3) {throw C();}
		else throw runtime_error("Invalid Option!!");
	}
	// catch(A) {cout<<"Name is PAVAN.\n";}
	// catch(B) {cout<<"Age is 19.\n";}
	// catch(C) {cout<<"Grade is 75.5%\n";}
	catch(...){cout<<"catch all block!!\n";}
	return 0;
}