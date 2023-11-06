// Volume of Cubiod

#include<iostream>
#include<math.h>
using namespace std;

class Cuboid {
	public:
		int volume(int l, int b, int h) {
			return l*b*h;
		}
};

int main() {
	Cuboid c1;
	int l, b, h;
	cout<<"Enter l b h values: ";
	cin>>l>>b>>h;
	cout<<"Volume: "<<c1.volume(l, b, h);
	return 0;
}
