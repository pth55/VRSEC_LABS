#include<iostream>
using namespace std;

class ComplexNumber {
    private:
        int a, b;
    public:
        ComplexNumber(int a, int b){
            this->a=a; this->b=b;
        }
        ComplexNumber addition(ComplexNumber &c1, ComplexNumber &c2){
            int a = c1.a + c2.a;
            int b = c1.b + c2.b;
            return (ComplexNumber(a,b));
        }
        void display() {
            cout<<a<<" + "<<b<<"i"<<endl;
        }

        // friend function for multiplying two complex numbers
        friend ComplexNumber multiply(ComplexNumber &c1, ComplexNumber &c2);
};

ComplexNumber multiply(ComplexNumber &c1, ComplexNumber &c2){
    int a = c1.a * c2.a;
    int b = c1.b * c2.b;
    return ComplexNumber(a,b);
}

int main() {
    ComplexNumber c1(2,3);
    ComplexNumber c2(10,20);
    c1.display();
    c2.display();
    cout<<"Addition of Above Numbers: ";
    ComplexNumber sum = sum.addition(c1, c2);
    sum.display();

    cout<<"Multiplication of Above Numbers: ";
    ComplexNumber mul = multiply(c1, c2);
    mul.display();
    return 0;
}