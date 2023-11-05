#include<iostream>
#include<math.h>
#define SIZE 8
using namespace std;

int main() {
	int a[SIZE] = {2, 4, 1, 7, 2, 3, 0, 6};
	int b[SIZE];
	for(int i = 0; i < SIZE; i++) {
		int count = 0;
		for(int j = i+1; j < SIZE; j++) {
			if(a[i] > a[j]) {
				if(a[i] == 0) {
					count = 0;
					continue;
				}
				else {
					count += 1;
				}
			}
			b[i] = count;
		}
	}
	
	for(int i = 0; i < SIZE; i++) {
		cout<<b[i]<<" ";
	}
	
	return 0;
}
