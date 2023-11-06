#include<iostream>
using namespace std;

class Student {
public:
	string roll, name;
	static int totalStudents;

	Student(){totalStudents+=1;}
	
	static int getTotalStudents(){return totalStudents;}
	
	void setData(){
		cout<<"Enter Roll: ";
		cin>>roll;
		cout<<"Enter Name: ";
		cin>>name;
	}

};

int Student::totalStudents=0;

int main(int argc, char const *argv[])
{
	Student s1, s2, s3;
	s1.setData();
	s2.setData();
	s3.setData();
	cout<<"Total Students: "<<Student::getTotalStudents()<<endl;
	return 0;
}