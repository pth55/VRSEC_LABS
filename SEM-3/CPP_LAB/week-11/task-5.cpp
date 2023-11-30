// Write a c++ program for Array Index out of Bounds Exception
#include<iostream>
#include<exception>
#include<stdexcept>
#define SIZE 3
using namespace std;


float add(int *arr, int n, int d){
    if((n<0 || d>=SIZE))
        throw runtime_error("ArrayIndexOutOfBoundException: Attempted to Access invalid array Index.");
    else
        return arr[n]/arr[d];
}

int main() {
    int arr[3] = {5, 25, 125};
    int i,j;
    try {
        cout<<"Enter Array Indexes to Access: ";
        cin>>i>>j;
        float res = add(arr, i, j);
        cout<<"Division Result: "<<res<<endl;
    }
    catch(runtime_error &r) {
        cout<<r.what()<<endl;
    }
    return 0;
}
