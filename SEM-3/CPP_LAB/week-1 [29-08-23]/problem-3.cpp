// write a c++ programme to print the twin primes in the given range.
#include<iostream>
#include<cstring>
#include<math.h>
using namespace std;

void printTwinPrime(int n) {
    // Create a boolean array "prime[0..n]"
    // and initialize all entries it as true.
    // A value in prime[i] will finally be false
    // if i is Not a prime, else true.
    bool prime[n + 1];
    memset(prime, true, sizeof(prime)); // It copies a single character for a specified number of times to an object.
 
    for (int p = 2; p * p <= n; p++) {         
        // If prime[p] is not changed,
        // then it is a prime

        if (prime[p] == true) {
            // Update all multiples of p
            for (int i = p * 2; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    // to check for twin prime numbers
    // display the twin primes
    for (int p = 2; p <= n - 2; p++)
        if (prime[p] && prime[p + 2])
            cout << "(" << p << ", " << p + 2 << ")" ;
}
 
int main()
{
    int n = 25;
    printTwinPrime(n); 
    return 0;
}