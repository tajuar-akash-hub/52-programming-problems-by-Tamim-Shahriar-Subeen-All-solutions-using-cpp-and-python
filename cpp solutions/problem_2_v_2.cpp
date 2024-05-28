#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    string s;
    while(test--)
    {
        cin>>s;

        // cout<<s.length();
        // cout<<endl;

        char last_digit = s[s.length()-1];
        
        // use single quote for character in c / c++

        if ( last_digit == '0' || last_digit == '2' || last_digit =='4' || last_digit == '6' ||last_digit == '8' ){
            cout<<"even";
        }
        else{
            cout<<"odd";
        }

        cout<<endl;

    }

   


   


}
  

  
