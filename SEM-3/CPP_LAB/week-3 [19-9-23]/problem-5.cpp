// 5. Write a c++ program for addition of two different times  using object as an argument(hint: clock)
#include<iostream>
using namespace std;

class Time {
	private:
		int hrs, min, sec;
	public:
		Time() {hrs = min = sec = 0;}
		Time(int hrs, int min, int sec) {
			this->hrs = hrs;
			this->min = min;
			this->sec = sec;
		}

		// To Normalize the time to normal format.
		void solve()
    	{
	        min = min + sec / 60;
	        sec = sec % 60;
	        hrs = hrs + min / 60;
	        min = min % 60;
    	}

		Time add(Time t1, Time t2) {
			Time temp;
			temp.hrs = t1.hrs + t2.hrs;
			temp.min = t1.min + t2.min;
			temp.sec = t1.sec + t2.sec;
			temp.solve();
			return (temp);
		}

		void display() { cout<<hrs<<":"<<min<<":"<<sec<<endl; }
};


int main()
{
	Time t1(5, 50, 30), t2(7, 20, 34), t3;
	t3 = t3.add(t1, t2);
	t1.display();
	t2.display();
	t3.display();
	return 0;
}

/*
OUTPUT:
=======
5:50:30
7:20:34
13:11:4
*/
