// 2. modify problem-1 using constructor overloading

#include <iostream>
using namespace std;

class Student {
private:
	string roll;
	string name;
	int m1, m2, m3;
	float avg;
public:
	Student(string roll, string name, int m1, int m2, int m3) {
		this->roll = roll;
		this->name = name;
		this->m1 = m1;
		this->m2 = m2;
		this->m3 = m3;
	}

	Student(string roll, string name) {
		this->roll = roll;
		this->name = name;
		cout<<"Enter Marks m1, m2, m3: ";
		cin>>m1>>m2>>m3;
	}

	Student() {
		cout<<"Enter Student Details"<<endl;
		cout<<"Name       : ";
		getline(cin >> ws, name);
		cin.clear();
		cout<<"Roll Number: ";
		getline(cin >> ws, roll);
		cin.clear();
		cout<<"Enter Marks m1, m2, m3: ";
		cin>>m1>>m2>>m3;
	}
	
	void Display();
};

void Student::Display() {
	avg = (m1+m2+m3)/3;
	cout<<endl<<"--: Student Details :---"<<endl;
	cout<<"Name         : "+name<<endl;
	cout<<"Roll         : "+roll<<endl;
	cout<<"Marks        : "<<m1<<" "<<m2<<" "<<m3<<endl;
	cout<<"Average Marks: "<<avg<<endl;
}

int main() {
	Student s1("LE-01", "B PAVAN KUMAR", 80, 80, 80),
			s2("LE-04", "CH HARI"), s3;

	s1.Display();
	s2.Display();
	s3.Display();
	return 0;
}