// Create a C++ program with a class that has multiple friend functions.
// Each friend function should access and display different private members of the class.
#include <iostream>
using namespace std;

class Rectangle {
private:
	int length, width, height;

public:
	Rectangle(int length, int width, int height){this->length=length; this->width=width; this->height=height;}
	friend void area(Rectangle);
	friend void volume(Rectangle);
};

void area(Rectangle r) {cout<<"Area is: "<<r.width*r.length<<endl;}
void volume(Rectangle r) {cout<<"Volume is: "<<r.length*r.width*r.height<<endl;}

int main(int argc, char const *argv[])
{
	Rectangle r(10,5,3);
	area(r);
	volume(r);
	return 0;
}
