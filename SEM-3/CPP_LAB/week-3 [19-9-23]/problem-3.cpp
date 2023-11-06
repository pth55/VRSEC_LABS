
// 3. Volume of the cuboid using function overloading
#include <iostream>
using namespace std;

class Cuboid {
	public:
		void volume(int l, int b, int h) {
			cout<<"Volume is: "<<l*b*h<<endl;
		}
		void volume(int l, int b) {
			int h;
			cout<<"Enter Height: ";
			cin>>h;
			cout<<"Volume is: "<<l*b*h<<endl;
		}
		void volume() {
			int l, b, h;
			cout<<"Enter Length, Base, Height: ";
			cin>>l>>b>>h;
			cout<<"Volume is: "<<l*b*h<<endl;
		}
};

int main()
{
	Cuboid c1;
	c1.volume();
	c1.volume(2, 3, 4);
	c1.volume(2, 3);
	return 0;
}