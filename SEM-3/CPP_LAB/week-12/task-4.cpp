// 4.	Write a cpp program to find out the minimum and maximum element using function templates.
#include<iostream>
using namespace std;
template <typename M>
M min(M a, M b) { return a>b?b:a;}
template <typename M>
M max(M a, M b) { return a>b?a:b;}

int main() {
	cout<<min<float>(21.3f, 3.2f)<<endl;
	cout<<min<int>(2011, 3002)<<endl;
	cout<<max<int>(2011, 3002)<<endl;
	cout<<max<float>(21.3f, 3.2f)<<endl;
	return 0;
}