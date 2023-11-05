#include<iostream>
#include<math.h>
#include<typeinfo>
using namespace std;
/*
int - i
double - d
float - f
*/

bool isPerfectSquare(long double x)
{
	if (x >= 0) {

		long long sr = sqrt(x);		
		if (sr * sr == x)
			return 1;
	}
	else {
		return -1;
	}
}

int main()
{
	long long x;
	cout<<"Enter a Number: ";
	cin>>x;
	return 0;
}

