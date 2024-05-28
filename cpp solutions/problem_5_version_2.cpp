#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n; 
        cin>>n;
        
        for(int i=0;i<n*n;i++)
        {
            if ( i %){
                cout<<endl;
            }
            
            else{
                cout<<"*"<<" ";
            }

        }

        cout<<endl;
    }
}