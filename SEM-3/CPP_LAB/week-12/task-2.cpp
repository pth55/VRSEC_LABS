// 2.	Perform calculator operations using function templates.
#include<iostream>
using namespace std;

template <typename T>
T add(T a, T b) {return a+b;}

template <typename T>
T sub(T a, T b) {return a-b;}

template <typename T>
T mul(T a, T b) {return a*b;}

template <typename T>
T div(T a, T b) {return a/b;}

int main() {
	cout<<add(1, 2)<<endl;
	cout<<sub(12.5f, 34.1f)<<endl;
	cout<<mul(2.3d, 5.66d)<<endl;
	return 0;
}
