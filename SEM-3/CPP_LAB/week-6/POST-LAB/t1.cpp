#include<iostream>
using namespace std;

class Object{
public:
	int serial_num;
	static int count;
	Object(){serial_num = count+1; count+=1;}
	void getSerialNum(){cout<<"I'm Object "<<serial_num<<endl;}
};

int Object::count=0;

int main(int argc, char const *argv[])
{
	Object obj1, obj2, obj3;
	obj1.getSerialNum();
	obj2.getSerialNum();
	obj3.getSerialNum();
	return 0;
}