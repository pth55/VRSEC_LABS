// 1.write a c++ program for the addtion of two complex numbers using + operator overloading

#include <iostream>
using namespace std;

class Complex {
private:
	int real, img;
public:
	Complex(int real = 0, int img = 0){
		this->real = real; this->img = img;
	}

	Complex operator+(Complex obj) {
		return Complex(this->real + obj.real, this->img + obj.img);
	}
	void print(){ cout << real << " + i" << img << '\n'; }
};

int main() {
	Complex c1(10, 5), c2(2, 4);
	Complex c3 = c1 + c2;
	c3.print();
	return 0;
}
