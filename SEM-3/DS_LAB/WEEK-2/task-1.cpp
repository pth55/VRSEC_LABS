#include<iostream>
using namespace std;
#define SIZE 10


int binary_search(int *arr, int s, int n) {
	int min = 0, max = s-1, flag = -1;
	for(int i = 0; i < s; i++) {
		int mid = (min+max)/2;
		if(arr[mid] == n) {
			flag = 1;
		} else if(n > arr[mid]) {
			min = mid + 1;
		} else if(n < arr[mid]) {
			max = mid - 1;
		}
	}
	return flag;
}


int main() {
	int a[SIZE] = {1, 5, 20, 30, 45, 46, 78, 89, 90, 100};
	int n;
	cout<<"Enter a Number to Search: ";
	cin>>n;
	if((binary_search(a, SIZE, n)) != -1) {
		cout<<"Element Found";
	} else {
		cout<<"Element Not Found";
	}
	return 0;
}
