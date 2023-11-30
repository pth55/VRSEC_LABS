// Write  acpp program to create a user defined exception “not eligible to vote” if person age is < 18.
#include<iostream>
#include<stdexcept>
#include<exception>
using namespace std;

class VoteException : public exception {
    public:
        const char* what() const throw(){
            return "VoteException: Your're Not Eligible for Vote!";
        }
};

bool checkAge(int age){
    if(age < 18){
        throw VoteException();
    }
    else {
        return true;
    }
}

int main() {
    int age;
    try{
         cout<<"Enter Age: ";
         cin>>age;
         if(checkAge(age)){
            cout<<"Your're Eligible for Vote!\n";
         }
    } catch(exception &e) {
        cout<<e.what();
    } catch(...) {
        cout<<"Default Exception!\n";
    }
    return 0;
}
