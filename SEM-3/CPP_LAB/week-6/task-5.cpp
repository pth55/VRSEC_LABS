#include<iostream>
using namespace std;

class Test {
public:
	int x;
	static int y;
	Test(int x, int y){this->x=x; this->y=y;}
};

int Test::y=0;

int main() {
	Test t1(1, 2), t2(3, 4);
	cout<<"Non Static of t1: "<<t1.x<<endl;
	// cout<<"Static of t1    : "<<t1.y<<endl;
	cout<<"Static of t1    : "<<Test::y<<endl;
	cout<<"Non Static of t2: "<<t2.x<<endl;
	// cout<<"Static of t2    : "<<t2.y<<endl;
	cout<<"Static of t2    : "<<Test::y<<endl;
	return 0;
}