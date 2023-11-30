// 7. Write a cpp program to perform bubble sort using  class templates.
#include <iostream>
using namespace std;
template <typename T>

class BubbleSort {
public:
	T *arr;
	int size;
	BubbleSort(){
		cout<<"Enter Array Size: "; cin>>size;
		arr = new T(size);
		cout<<"Enter Array Elements: ";
		for (int i = 0; i < size; i++)
			cin>>arr[i];
	}
	void sort(){
		// logic
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size-1-i; j++) {
				if(arr[j] > arr[j+1]){
					T temp = arr[j+1];
					arr[j+1] = arr[j];
					arr[j] = temp;
				}
			}
		}
	}

	void printArray() {
		// stupid! don't try to use For-Each loop here, bcoz arr is a POINTER
		for (int i = 0; i < size; i++)
			cout<<arr[i]<<" ";
		cout<<endl;
	}

	~BubbleSort(){delete[] arr;}
};


int main() {
	BubbleSort <int>bs1;
	bs1.sort();
	cout<<"Sorted Elements: ";
	bs1.printArray();

	BubbleSort <char>bs2;;;;;;;
	bs2.sort();
	cout<<"Sorted Elements: ";
	bs2.printArray();
	return 0;
}