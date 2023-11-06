// Writea c++ program to demonstrate how constructors are invoked in Hierarchical inheritance.

#include <iostream>
using namespace std;

class A {
public:
	A() { cout<<"A class Constructor Invoked!"<<endl; }
	~A() { cout<<"A class Destructor Invoked!"<<endl; }
};

class B : public A{
public:
	B() { cout<<"B class Constructor Invoked!"<<endl; }
	~B() { cout<<"B class Destructor Invoked!"<<endl; }
};

class C : public A{
public:
	C() { cout<<"C class Constructor Invoked!"<<endl; }
	~C() { cout<<"C class Destructor Invoked!"<<endl; }
};

int main() {
	B b;
	C c;
	return 0;
}