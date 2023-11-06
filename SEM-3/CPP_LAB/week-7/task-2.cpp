// 2.write a c++  program to copy the details  of one student details into other srudent  program on copy constructor

#include<cstring>
#include<iostream>
using namespace std;

class Student {
public:
	int stdRoll;
	char *stdName;
	int s;
	Student(const char *stdName, int id){
		stdRoll = id;
		s = strlen(stdName);
		this->stdName = new char[s+1]; // 1 - for '\0'
		strcpy(this->stdName, stdName); 
	}

	Student(const Student &old_str) { // copy constructor
		s = old_str.s;
		stdName = new char[s+1];
		strcpy(stdName, old_str.stdName);
		stdRoll = old_str.stdRoll+1;
	}

	void change(const char *str) {
		delete[] stdName;
		s = strlen(str);
		stdName = new char[s+1];
		strcpy(stdName, str);
	}

	void display() {
		cout<<"ID   : "<<stdRoll<<endl;
		cout<<"Name : "<<stdName<<endl<<endl;
	}

	~Student(){delete[] stdName;}
};

int main(int argc, char const *argv[])
{
	Student std1("PAVAN", 111);
	Student std2 = std1;
	cout<<"Before Changing.."<<endl;
	std1.display();
	std2.display();
	std2.change("SATISH");
	cout<<"After Changing.."<<endl;
	std1.display();
	std2.display();
	return 0;
}