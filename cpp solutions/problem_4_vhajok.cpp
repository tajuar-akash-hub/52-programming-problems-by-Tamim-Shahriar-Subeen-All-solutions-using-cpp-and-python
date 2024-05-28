#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int case_number = 1;
    while(test--){
        int n;
        cin>>n;
        cout<<"case "<<case_number<<":"<<" ";
        for(int i=1;i<=n;i++)
        {
            if (n % i == 0 ){  // if mod is 0 
                
                cout<<i<<" ";
            }
        }
        case_number++;
        cout<<endl;
    }
    
}