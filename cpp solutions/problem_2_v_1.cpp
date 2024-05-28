#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    char n[101];
    while(test--)
    {
        cin>>n;

        
        // now we need to find the last character 

        int i = 0;

        while(n[i]!='\0'){
            i++;
            
        }
        char last_digit = n[i-1] ; //as array start from 0 

        // cout<<"The value of i"<<" "<<i<<" ";

        // cout<<last_digit;

        //main logic is here 

        if ( last_digit == '0' || last_digit == '2' || last_digit =='4' || last_digit == '6' ||last_digit == '8' ){
            cout<<"even";
        }
        else{
            cout<<"odd";
        }


        cout<<endl;

    }
}
  

  
