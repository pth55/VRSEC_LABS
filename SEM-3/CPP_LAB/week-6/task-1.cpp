#include <iostream>
using namespace std;

class Railway{
private:
	string pass_name;
	int age, price, total_amount;
public:
	static int no_of_tickets;
	static int no_of_cust;
	Railway(string pass_name, int age){
		this->pass_name = pass_name;
		this->age = age;
		no_of_cust += 1;
	}
	 void bookTicket() {
		int n;
		cout<<"Enter No.of Tickets: ";
		cin>>n;
		cout<<"Enter 1 Ticket Price: ";
		cin>>price;
		no_of_tickets += n;
		price = price*n;
	}
	void userDetails(){
		cout<<"User Information\n";
		cout<<"----------------\n";
		cout<<"User Name   : "<<pass_name<<endl;
		cout<<"User Age    : "<<age<<endl;
		cout<<"Total Price : "<<price<<endl<<endl;
	}
};

int Railway::no_of_tickets = 0;
int Railway::no_of_cust = 0;

int main(){
	Railway c1("B. PAVAN", 18), c2("S. HARI", 25);
	c1.bookTicket();
	c2.bookTicket();
	c1.userDetails();
	c2.userDetails();
	cout<<"TOTAL TICKETS BOOKED : "<<Railway::no_of_tickets<<endl;
	cout<<"TOTAL CUSTOMERS      : "<<Railway::no_of_cust<<endl;
	return 0;
}