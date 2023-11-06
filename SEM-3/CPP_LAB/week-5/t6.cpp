#include<iostream>
using namespace std;
class Rectangle{
    private:
        int l, b;
    public:
        Rectangle(int x, int y) { l = x, b = y;}
        friend void rectangleArea(Rectangle&);

};

void rectangleArea(Rectangle& r){
    cout<<"Rectangle Area: "<<r.l*r.b;
}

int main() {
    int l, b;
    cout<<"Enter Length and Width: ";
    cin>>l>>b;
    Rectangle rect(l, b);
    rectangleArea(rect);     
    return 0;
}
