#include<iostream>
using namespace std;
#define PI 3.1415

class Numbers{
    private:
        int a,b;
    public:
        Numbers(int a, int b) {this->a=a; this->b=b;}
        friend void addition(Numbers&);
};

void addition(Numbers &n) {
    cout<<"Addition is : "<<n.a + n.b<<endl;
}

int main() {
    int a, b;
    cout<<"Enter Two Numbers: ";
    cin>>a>>b;
    
    Numbers n(a,b);
    addition(n);

    return 0;
}
