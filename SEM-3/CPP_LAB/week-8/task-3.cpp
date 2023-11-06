// 3.write a c++ program for overloading of uinary  postfix +, prefix -  using operator overloading.

// pre-inc/dec does't require int as argument
#include<iostream>
using namespace std;

class Integer {
	private: int x;
	public:
		Integer(int x){this->x=x;};
		// post increment
		void operator ++(int){(this->x)++;}
		// pre decrement
		void operator --(){--(this->x);}
		void display(){cout<<"X value: "<<x<<endl;}
};

int main() {
	Integer i(10);
	i++;
	i.display();
	--i;
	i.display();
	return -1;
}