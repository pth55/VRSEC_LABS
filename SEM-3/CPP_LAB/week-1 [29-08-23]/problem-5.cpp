// Real roots of a Quadratic EQN.
#include<iostream>
#include<math.h>
using namespace std;

class Quadratic {
	private:
		int a,b,c,sqt;
		float r1, r2;	
	public:
		void getData();
		void getRoots();
};

void Quadratic::getData(){
	cout<<"Enter a,b,c Values: ";
	cin>>a>>b>>c;
}

void Quadratic::getRoots(){
	sqt = sqrt(b*b-4*a*c);
	r1 = (-b+sqt)/(2*a);
	r2 = (-b-sqt)/(2*a);
	cout<<"Root 1: "<<r1<<endl;
	cout<<"Root 2: "<<r2;
}

int main() {
	Quadratic q1;
	q1.getData();
	q1.getRoots();
	return 0;
}
