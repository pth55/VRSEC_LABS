#include <iostream>
using namespace std;

class BankAccount {
public:
    string name;
    float balance;
    int time;

    BankAccount(string name, float bal, int time) {
        this->name = name; this->bal = bal; this->time = time;
    }

    void display(){
        cout << "Acc. Holder: " << name << endl;
        cout << "Time: " << time << " years" << endl;
        cout << "Balance: Rs. " << balance << endl;
    }
    float findInterest();
};

class AccIntrest : public BankAccount {
public:
    AccIntrest(string name, float bal, int time) : BankAccount(name, bal, time) {}

    float findInterest(){
        if (time < 2)
            return balance * 0.05; // 5%
        else if (time >= 2 && time <= 4)
            // 8%
            return balance * 0.08;
        else
            // 10%
            return balance * 0.10; 
    }

    void display(){
        cout << "Bank Interest Details\n";
        cout << "-----------------------\n";
        BankAccount::display();
        cout << "Interest Rate: " << findInterest() * 100 << "% Per annum" << endl;
        cout << "Total Balance (w/t Interest): Rs. " << balance + findInterest() << "\n";
    }
};

int main() {
    AccIntrest MyAcc("PAVAN KUMAR", 10000, 3);
    MyAcc.display();

    return 0;
}
