#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test,number;
    cin>>test;
    while(test--)
    {
        cin>>number ;
        
        if (number %2 ==0)
        {
            cout<<"even";
        }
        else{
            cout<<"odd";
        }
        cout<<endl;
        
    }
}