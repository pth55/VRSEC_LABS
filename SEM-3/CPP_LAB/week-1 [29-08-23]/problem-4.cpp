// write a c++ programme to print co primes in the given range
/*
Note: 
>> 1 is co-prime with every number.
>> Any two prime numbers are co-prime to each other: As every prime number has only two factors 1 and the 
number itself.
>> Any two successive numbers/ integers are always co-prime: Take any consecutive numbers such as 2, 3, or 
3, 4 or 5, 6, and so on; they have 1 as their HCF.
>> The sum of any two co-prime numbers are always co-prime with their product:
2 and 3 are co-prime and have 5 as their sum (2+3) and 6 as the product (2×3).
Hence, 5 and 6 are co-prime to each other.
>> Two even numbers can never form a coprime pair as all the even numbers have a common factor as 2.
>> If two numbers have their unit digits as 0 and 5, then they are not coprime to each other. 
For example 10 and 15 are not coprime since their HCF is 5 (or divisible by 5).
*/
#include<iostream>
#include<stdio.h>
using namespace std;

// int main() {
// 	int x,y;
// 	cout<<"Enter two numbers: ";
// 	cin>>x>>y;
// //	int z = x>y?x:y;
// //	int xa[x-1];
// //	int ya[y-1];
	
// //	for(int i = 0; i<x; i++){
// //		if(x%(i+1) == 0){
// //			xa[i] = i+1;
// //		} else {
// //			xa[i] = 0;
// //		}
// //	}
// //
// //	for(int i = 0; i<y; i++){
// //		if(y%(i+1) == 0){
// //			ya[i] = i+1;
// //		}else{
// //			ya[i] = 0;
// //		}
// //	}
	
// //	for(int i = 0; i<x; i++){
// //		if(xa[i] != 0)
// //			cout<<xa[i]<<" ";
// //	}
// //	cout<<endl;
// //	for(int i = 0; i<y; i++) {
// //		if(ya[i] != 0)
// //		cout<<ya[i]<<" ";
// //	}

// //	bool f = false;
// //	for(int i = 1; i<z; i++){
// //		if (xa[i] != 0 || ya[i] != 0){
// //			if(xa[i] == ya[i]) {
// //				f = true;
// //				break;
// //			}
// //		}
// //		else {
// //			continue;
// //		}
// //	}
// //	
// //	if(true)
// //		cout<<"Not Co-Prime";
// //	else
// //		cout<<"Co Prime";

// 	int hcf = 0;
// 	for(int i = 1; i <= x; i++) {
// 		if(x%i==0 && y%i==0){
// 			hcf = i;
// 		}
// 	}
// 	if(hcf == 1) {
// 		cout<<"CO-Primes";
// 	} else {
// 		cout<<"Not Co-Primes";
// 	}

// 	return 0;
// }

// Function to calculate the GCD of two numbers using the Euclidean algorithm
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int start, end;
    // Input the range
    cout <<"Enter the start of the range: ";
    cin>>start;
    cout<<"Enter the end of the range: ";
    cin>>end;
    cout<<"Co-primes in the range " << start << " to " << end << " are:\n";

    for (int i = start; i <= end; ++i) {
        for (int j = i + 1; j <= end; ++j) {
            if (gcd(i, j) == 1) {
                cout << "(" << i << ", " << j << ")\n";
            }
        }
    }

    return 0;
}
