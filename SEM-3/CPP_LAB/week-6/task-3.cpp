// 3. Write a c++ program to find out the number of votes polled by party ‘X’ and party ‘Y’
// assuming a general election at Vijayawada. Find out the Winner of the election.
// Use Static Variables
#include<iostream>
using namespace std;

class Elections {
public:
	static int X;
	static int Y;

	void voteX(){X += 1;}
	void voteY(){Y += 1;}
	void winner() {
		if(X>Y)
			cout<<"X Wins with "<<X-Y<<" Vote Majority."<<endl<<"X votes: "<<X<<endl<<"Y votes: "<<Y<<endl;
		else if(Y > X)
			cout<<"Y Wins with "<<Y-X<<" Vote Majority."<<endl<<"X votes: "<<X<<endl<<"Y votes: "<<Y<<endl;
		else
			cout<<"Election is Tie."<<endl<<"X votes: "<<X<<endl<<"Y votes: "<<Y<<endl;
	}
};

int Elections::X=0;
int Elections::Y=0;

int main() {
	Elections e;
	int i = 0;
	while(i != 3){
		cout<<"1. Vote for X\n2. Vote for Y\n3. Exit\n";
		cout<<"Enter Your Choice: ";
		cin>>i;
		if(i == 1)
			e.voteX();
		else if(i == 2)
			e.voteY();
		else if(i < 1 && i>3)
			cout<<"Invalid Vote!\n";
	}

	e.winner();
	return 0;
}