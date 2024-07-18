#include <bits/stdc++.h>
using namespace std;
int main()
{
  int test;  
  cin >>test;
  while(test--){

    double total_run_of_opponents ;
    double current_run_of_batsman ;
    double ball_left;
    double over_left ;
    double expected_run_rate;
    double current_run_rate;
    
    
    cin >> total_run_of_opponents >> current_run_of_batsman >>ball_left;
    
    over_left = ball_left / 6 * 1.0;
    current_run_rate = current_run_of_batsman /(50 *1.0 -over_left);

    if (total_run_of_opponents < current_run_of_batsman){
      expected_run_rate = 0.00;

    }
    else {
      expected_run_rate = ((total_run_of_opponents + 1) - current_run_of_batsman) / over_left;

    }
    
    

    

    //debugging presentaiton
    // cout  <<"current run rate :"<< current_run_rate<<" " <<endl;
    // cout << "Expected run rate :  " << expected_run_rate ;
    // cout<<endl;
    // cout<<"---------------"<<endl;
    
    //final presentation for the judge 
    cout << fixed << setprecision(2) << current_run_rate << " " << expected_run_rate ;

    cout<<endl;
    


    
  }


}

//behind the theory 

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   int num1 = 5,num2=2;
//   double ans ;
//   ans= (num1*1.0 /num2); //converting num1 to double 
//   cout<<"ans = ";
//   cout<<fixed<<setprecision(2)<<ans;
// }