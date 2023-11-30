#include<iostream>
using namespace std;

class Employee {
    public:
        string name, empid;
        Employee(string name, string empid){
            this->name = name;
            this->empid=empid;
        }
        virtual void salary() = 0;
};

class Boss : public Employee {
    public:
        int sal;
        Boss(string name, string empid, int sal):Employee(name, empid){
            this->sal = sal;
        }

        void salary() {
            cout<<"Boss Salary is: "<<sal<<endl;
        }
};

class WeeklyWork : public Employee {
    public:
        int sal, nof_days;
        WeeklyWork(string name, string empid, int sal, int nof_days):Employee(name, empid){
            this->sal = sal;
            this->nof_days = nof_days;
        }

        void salary() {
            cout<<"WeeklyWork Salary is: "<<sal*nof_days<<endl;
        }
};

class PieceWish : public Employee {
    public:
        int sal, pieces;
        PieceWish(string name, string empid, int sal, int pieces):Employee(name, empid){
            this->sal = sal;
            this->pieces = pieces;
        }

        void salary() {
            cout<<"PieceWish Salary is: "<<sal*pieces<<endl;
        }
};

int main() {
    Employee *emp;
    Boss boss("PERL", "EMP-1", 100000);
    WeeklyWork weekly("PYTHON", "EMP-001", 1000, 10);
    PieceWish piece("JAVA", "EMP-0080", 200, 10);

    emp = &boss;
    emp->salary();
    emp = &weekly;
    emp->salary();
    emp = &piece;
    emp->salary();
    return 0;
}