#include<iostream>
using namespace std;

int main() {
	
	int a[5] = {20, 10, 40, 30, 50};
	int s = 5;
	for(int i = 0; i<5; i++){
		for(int j = i; j < 5; j++){
			if(a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	cout<<"Product of 2 max. Elements: "<<a[s-1]*a[s-2];
	
	return 10;
}
