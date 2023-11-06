// 4.write a c++ program for overloading Binary  operator -  using friend functions.

#include <iostream>
using namespace std;

class Complex {
private:
	int real, img;
public:
	Complex(int real = 0, int img = 0){
		this->real = real; this->img = img;
	}
	void print(){ cout << real << " + i" << img << '\n'; }
	friend Complex operator-(Complex &obj1, Complex &obj2);
};

Complex operator-(Complex &obj1, Complex &obj2) {
		return Complex(obj1.real - obj2.real, obj1.img - obj2.img);
}

int main() {
	Complex c1(10, 5), c2(2, 4);
	Complex c3 = c1 - c2; // or --> c3 = operator-(c1, c2);
	c3.print();
	return 0;
}
