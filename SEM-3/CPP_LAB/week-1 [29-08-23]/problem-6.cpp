#include<iostream>
#include<math.h>
using namespace std;

class Prime {
	public:   
		void prime(int n){
			bool flag=false;
			if(n%2 != 0) {
				for(int i = 3; i<=sqrt(n); i++) {
					if(n%i == 0) {
						flag = true;
					}
				}
			}			
			if(flag) {
				cout<<"Not Prime"<<endl;
			} else {
				if(n == 2)
					cout<<"Even Prime"<<endl;
				else
					cout<<"Odd Prime"<<endl;
			}
		}
};


int main() {
	Prime p;
	p.prime(2);
	p.prime(5);
	p.prime(4);
	return 0;
}
