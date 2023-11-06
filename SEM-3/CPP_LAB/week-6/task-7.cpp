#include<iostream>
using namespace std;

class Object{
public:
	int serial_num;
	static int count;
	Object(){serial_num = count+1; count+=1;}
	int getSerialNum(){return serial_num;}
};

int Object::count=0;

int main(int argc, char const *argv[])
{
	Object obj1, obj3, obj2;
	cout<<"Object 1 Serial Number: "<<obj1.getSerialNum()<<endl;
	cout<<"Object 2 Serial Number: "<<obj2.getSerialNum()<<endl;
	cout<<"Object 3 Serial Number: "<<obj3.getSerialNum()<<endl;
	return 0;
}