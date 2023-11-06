// 7.	write a c++programe to display the total cost in card at bookstore
// 		Input:
// 			Book name,Author,number of copies, cost of the book using the help of constructor overloading	

#include <iostream>
using namespace std;

class Books {
	private:
		string name, author;
		int copies, cost;
	public:
		Books(){
			cout<<endl<<"Enter Book Information:"<<endl;
			cout<<"-----------------------"<<endl;
			cout<<"Book Name      : ";
			getline(cin, name);
			cout<<"Author Name    : ";
			getline(cin, author);
			cout<<"No.of Copies   : ";
			cin>>copies;
			cout<<"Cost of 1 Copy : ";
			cin>>cost;
			cout<<endl;
		}
		Books(string name, string author, int copies, int cost) {
			this->name = name;
			this->author  = author;
			this->copies = copies;
			this->cost = cost;
		}
		
		void Display(){
			cout<<endl<<"Book Information"<<endl;
			cout<<"----------------"<<endl;
			cout<<"Book Name      : "<<name<<endl;
			cout<<"Author Name    : "<<author<<endl;
			cout<<"No.of Copies   : "<<copies<<endl;
			cout<<"Cost of 1 Copy : "<<cost<<endl;
			cout<<"----------------"<<endl;
			cout<<"TOTAL COST     : "<<(copies*cost)<<endl;
			cout<<"----------------"<<endl;
		}
};


int main() {
	Books b1, b2("Rich Dad Poor Dad", "Robert", 2, 300);
	b1.Display();
	b2.Display();
	return 0;
}