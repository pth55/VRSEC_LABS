// Convert Number into Words
#include<iostream>
#include<string>
using namespace std;

int main() {
	int n, i, temp, count = 0, dig = 0;
	string in_words = "";
	string names[10] = {"ZERO", "ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE"};
	cout<<"Enter a Number: ";
	cin>>n;

	temp = n;
	while(temp != 0){
	 	temp = temp/10;
	 	++count; // same as count += 1; or count = count + 1;
	}
	
	string word[count];
	i = count-1;
	while(n > 0){
	 	dig = n%10;
	 	word[i] = names[dig];
	 	n = n/10;
	 	i -= 1;
	}
	 
	for(i = 0; i < count; i++){
	 	in_words += word[i]+" ";
	}
	cout<<"Number in Words: "+in_words;
	return 0;
}
