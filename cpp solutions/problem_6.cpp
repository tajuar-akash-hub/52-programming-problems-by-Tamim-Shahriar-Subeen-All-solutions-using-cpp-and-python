#include <bits/stdc++.h>
using namespace std;
int main()
{
  int test;
  cin>>test;
  
  // this is you should split all the digit
  // while(test--)
  // {
  //   int n; cin>>n;
  //    while(n % 10 > 0){
  //       int splitted_digit = n % 10;
  //       cout<<splitted_digit<<" ";
  //       n = n / 10; //decreasing n 
  //    }
  //    cout<<endl;
  // }

  // now you can create an array to get the first and last number as it 5 digit number

  // but it possible to solve it without array 
  //let do this 

  while(test--)
  {
    int n; 
    cin>>n; 
    

    int first_digit  = n /  10000;
    int last_digit = n % 10;

    // cout<<first_digit<<" "<<last_digit; //checked

    int sum = first_digit+last_digit;
    cout<<"Sum = "<<sum;
    cout<<endl;
    

  }


}