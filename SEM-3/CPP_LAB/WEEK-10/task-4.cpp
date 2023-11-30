#include<iostream>
using namespace std;

class Employee {
    public:
        string name, age, addr, gen;
        virtual void display()=0;
        Employee(string name, string age, string addr, string gen) {
            this->name = name;
            this-> age = age;
            this->addr = addr;
            this->gen = gen;
        }
};

class FullTime : public Employee {
    public:
        string sal, desig;
        FullTime(string name, string age, string addr, string gen, string sal, string desig):Employee(name, age, addr, gen) {
            this->sal = sal; this->desig = desig;
        }
        void display() {
            cout<<"FullTime Employee Details\n";
            cout<<"==========================\n";
            cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"Address: "<<addr<<endl<<"Gender: "<<gen<<endl;
            cout<<"Salary: "<<sal<<endl<<"Designation: "<<desig<<endl;
        }
};

class PartTime : public Employee {
    public:
        int whours, rate;
        PartTime(string name, string age, string addr, string gen, int whours, int rate):Employee(name, age, addr, gen) {
            this->whours = whours; this->rate = rate;
        }
        int calculatePay() {return whours*rate;}
        void display() {
            cout<<"\nPartTime Employee Details\n";
            cout<<"==========================\n";
            cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"Address: "<<addr<<endl<<"Gender: "<<gen<<endl;
            cout<<"Salary: "<<this->calculatePay()<<endl;
        }
};

int main() {
    Employee *emp;
    FullTime ft("PAVAN", "23", "VIJ", "M", "2LPM", "SDE-3");
    PartTime pt("HARI", "23", "VIJ", "M", 3, 2000);

    emp = &ft;
    emp->display();

    emp = &pt;
    emp->display();
    return 0;
}