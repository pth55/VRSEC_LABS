// Write  a cpp program to handle derived class exception for the student class that is derived from person class.
#include <iostream>
using namespace std;

class Person { 
public:
    int age;
    string name;
    Person(){age = 0; name = "";}; // for throwing exception
	Person(int age, string name) {this->age = age; this->name = name;}
	void checkAge(){
		if(age<18)  
			throw Person();
	}
};

class Student: public Person {
    public:
    int grade;
    Student(){grade = 0;}; // for throwing exception
    Student(int age, string name):Person(age, name){cout<<"Enter Student Grade(1-100%): "; cin>>grade;}
    void checkGrade()
    {
      if(grade < 50)
        throw Student();
    }
    void showDetails()
    {
        cout<<"Student Details"<<endl;
        cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"Grade: "<<grade<<endl;
    }
};

int main()
{
    try {
        Student std1(19, "PAVAN");
        std1.checkAge();
        std1.checkGrade();
        std1.showDetails();
    }
    catch(Student &) {
        cout<<"GradeError: Your're Grade is Too Low..\n";
    }
    catch(Person &) {
        cout<<"AgeError: Invalid Age..\n";
    }
    return 0;
}
