#include<iostream>
using namespace std;

class Shape {
    public:
        double l, b;
        virtual void area()=0;
};

class Rectangle : public Shape {
    public:
    void getData() {
        cout<<"Enter Base: ";cin>>b;
        cout<<"Enter Height: ";cin>>l;
    }
    void area() {
        cout<<"Rectangle Area is: "<<l*b<<endl;
    }
};

class Triangle : public Shape {
    public:
    void getData() {
        cout<<"Enter Base: ";cin>>b;
        cout<<"Enter Height: ";cin>>l;
    }
    void area() {
        cout<<"Triangle Area is: "<<.5*l*b<<endl;
    }
};

int main() {
    Shape *ptr;

    Rectangle r;
    ptr = &r;
    r.getData();
    ptr->area();

    Triangle t;
    t.getData();
    ptr = &t;
    ptr->area();
    return 0;
}
