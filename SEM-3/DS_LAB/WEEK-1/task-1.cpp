// [1, 2, 2, 2, 1, 1]

#include <iostream>
using namespace std;
#define SIZE 6
int main()
{
    int a[SIZE], b[SIZE], vals[SIZE];
    cout<<"Enter Array Elements\n";
    for(int i=0; i<SIZE; i++) {
        cout<<"Enter Element "+to_string(i+1)+": ";
        cin>>a[i];
        b[i] = -1;
        vals[i] = -1;
    }
    
    for(int i=0;i<SIZE; i++){
        int count = 1;
        int val = 1;
        for(int j=i+1; j<SIZE; j++) {
            if (a[i] == a[j]) {
                val = a[i];
                count += 1;
                b[j] = 0;
                vals[j] = 0;
            }
        }
        if (b[i] != 0) {
            b[i] = count;
            vals[i] = val;
        }
    }

    for (int i = 0; i < SIZE; i++)
    {
        if(b[i] != 0 && vals[i] != 0) {
            cout<<vals[i]<<" ==> "<<b[i]<<" ";
        }
    }
    return 0;
}
