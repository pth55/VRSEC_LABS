// 7.  Write a C++ program to find the average marks in 5 subjects  for 3 different students using arrays and array of objects.
#include<iostream>
using namespace std;
class Student {
private:
	int marks[5];
public:
	void setMarks() {
		cout<<"Enter Student Marks: ";
		for (int i = 0; i < 5; i++)
			cin>>marks[i];
	}

	int avg(){
		int avg=0;
		for(int i=0; i<5; i++)
			avg = avg+marks[i];
		return (avg/5);
	}
};

int main() {
	Student s[3];
	for(int i=0; i<3; i++) {
		s[i].setMarks();
	}

	for(int i=0; i<3; i++) {
		cout<<"Average of Student "<<i+1<<" Marks: "<<s[i].avg()<<endl;
	}
	return 0;
}