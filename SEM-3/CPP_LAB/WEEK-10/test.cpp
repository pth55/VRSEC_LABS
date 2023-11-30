#include<iostream>
using namespace std;

template <typename T, typename T1, typename T2>

T max(T1 a, T2 b) {
	return a>b?a:b;
}

int main() {
	cout<<max<int>(1,2)<<endl;
	cout<<max<float>(1.5f, 0.5f);
	return -1;
}