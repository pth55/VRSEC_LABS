// 6.	Write a cpp program to perform linear search using class templates.
#include <iostream>
using namespace std;
template <typename T>


class LinearSearch {
public:
	T *arr, ele;
	int size;
	LinearSearch(){
		cout<<"Enter Array Size: "; cin>>size;
		arr = new T(size);
	}
	void search(){
		bool flag = false;
		cout<<"Enter Array Elements: ";
		for (int i = 0; i < size; i++)
			cin>>arr[i];
		cout<<"Element to search: "; cin>>ele;
		for (int i = 0; i < size; i++)
			if(arr[i] == ele) flag = true;
		if(flag) cout<<"Element Found!!\n";
		else cout<<"Element Not Found!!\n";
	}
	~LinearSearch(){delete[] arr;}
};


int main() {
	LinearSearch <int>ls1; ls1.search();
	LinearSearch <char>ls2; ls2.search();
	return 0;
}