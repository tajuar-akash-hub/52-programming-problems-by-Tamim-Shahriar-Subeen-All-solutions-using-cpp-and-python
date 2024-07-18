// solution - 1 - using loop only but works less than or euqla to 10 
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int test; 
   cin >>test;
   while(test--){
      long long int number ; //int max number : 10 digit, long long int max digit = 20
      cin>>number;

      for(int i=number-1;i>=1;i--){
         number = number*i;
      }
      cout<<number;
      cout<<endl;
      
    
   }   
}

//solution - 2 : using recursion 