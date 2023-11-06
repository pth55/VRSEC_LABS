#include<iostream>
using namespace std;
#define PI 3.1415

class Circle{
    private:
        float radius;
    public:
        Circle(float r) {radius = r;}
        friend void Geometry(Circle&);
};

void Geometry(Circle &c) {
    cout<<"Area is: "<<PI*(c.radius*c.radius)<<endl;
    cout<<"Circumference is: "<<(2*PI*c.radius)<<endl;
}

int main() {
    float n;
    cout<<"Enter Radius: ";
    cin>>n;
    Circle c(n);
    Geometry(c);
    return 0;
}
