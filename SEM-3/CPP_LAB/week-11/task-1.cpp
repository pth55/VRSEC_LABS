// Write a cpp program for division by zero exception.
#include<iostream>
#include<exception>
#include<stdexcept>
using namespace std;

float division(int n, int d){
    if(d == 0)
        throw runtime_error("Math error: Attempted to divide by Zero\n");
    else
        return n/d;
}

int main() {
    int n, d;
    cout<<"Enter N and D: "; cin>>n>>d;
    try{
        cout<<"Result: "<<division(n,d);
    }
    catch(runtime_error &r) {
        cout<<"Error Occurred: "<<r.what()<<endl;
    }
    return 0;
}
