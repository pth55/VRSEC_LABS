// 2. write a c++ program for overloading for overloading of  new,delete  operators using  operator overloading

// new and delete operators are static internally but while overloading them it is not required to mention those are static, its completely optional.
// Note: here new and delete operators are overloaded locally for Student class, there is no Global scope. but if we want to make them global, just copy paste the same functions out side of the class, so ot works for all types
// Example: int *ptr = new int; --> this will not call Student class Overloaded Operator.

#include <iostream>
using namespace std;

class Student {
private: int roll; string name;
public:
	Student(int roll, string name) {this->roll = roll; this->name = name;}
	static void* operator new(size_t size) {
		cout<<"Size passed to new Operator (in bytes): "<<size<<endl;
		void *ptr = malloc(size);
		return ptr;
	}

	static void operator delete(void *ptr){
		free(ptr);
	}

	void print(){ cout<<"Name: "<<this->name<<endl; cout<<"Roll: "<<this->roll<<endl; }
};

int main() {

	Student *f = new Student(101, "Pavan");
	f->print();
	delete f;
	return 0;
}
