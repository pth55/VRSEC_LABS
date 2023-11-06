#include<iostream>
#include<math.h>
using namespace std;
// sqrt(s*(s-a)*(s-b)*(s-c))
class Triangle {
	public:
		float two_sides(float b, float h);
		float three_sides(int a, int b, int c);
};

float Triangle::two_sides(float b, float h) {
	return (0.5*b*h);
}
float Triangle::three_sides(int a, int b, int c) {
	float s = (a+b+c)/2;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main() {
	float b, h;
	int x, y,z;
	Triangle t1;
	cout<<"Enter Base and Height: ";
	cin>>b>>h;
	cout<<"Area of Triangle is: "<<t1.two_sides(b,h)<<endl;
	cout<<"Enter Three sides: ";
	cin>>x>>y>>z;
	cout<<"Area of a Triangle: "<<t1.three_sides(x, y, z);
	return 0;
}
