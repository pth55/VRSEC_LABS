#include <iostream>
using namespace std;
#define SIZE 5
int main()
{
    int a[SIZE], b[SIZE];
    cout<<"Enter Array Elements\n";
    for(int i=0; i<SIZE; i++) {
        cout<<"Enter Element "+to_string(i+1)+": ";
        cin>>a[i];
    }

    for(int i=0;i<SIZE; i++){
        for(int j=i+1; j<SIZE; j++) {
            if(a[i]>a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        b[i] = a[i];
    }

    for(int i=0; i<SIZE; i++) {
        cout<<b[i]<<endl;
    }
    return 0;
}
