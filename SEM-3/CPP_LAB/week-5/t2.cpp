#include<iostream>
using namespace std;
#define PI 3.1415

class Circle{
    private:
        float radius;
    public:
        Circle(float r) {radius = r;}
        friend float area(Circle&);
        friend float circumference(Circle&);
};

float area(Circle &c) {
    return PI*(c.radius*c.radius);
}

float circumference(Circle& c) {
    return (2*PI*c.radius);
}

int main() {
    float n;
    cout<<"Enter Radius: ";
    cin>>n;
    Circle c(n);
    cout<<"Area of Circle: "<<area(c)<<endl;
    cout<<"Circumference of Circle: "<<circumference(c)<<endl;
    return 0;
}
