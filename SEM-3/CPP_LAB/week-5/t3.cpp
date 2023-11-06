#include<iostream>
using namespace std;

class User{
    private:
        string password = "admin123";
    public:
        friend void checkPassword(User&);
};

void checkPassword(User& u) {
    string pass;
    while(u.password != pass) {
        cout<<"Enter Password: ";
        cin>>pass;
        if(pass == u.password) {
            cout<<"Password is Correct!!"<<endl;
            break;
        }
        cout<<"Password is Incorrect!!"<<endl;
    }
}

int main() {
    User obj;
    checkPassword(obj);
    return 0;
}
