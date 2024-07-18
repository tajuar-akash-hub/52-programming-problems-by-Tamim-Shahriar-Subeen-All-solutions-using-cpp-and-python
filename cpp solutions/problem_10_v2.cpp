//this is the second apprach
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int test;  
  cin >>test;
  while(test--){

    int total_run_of_opponents ,current_run_of_batsman ,ball;
    cin >> total_run_of_opponents >> current_run_of_batsman >>ball;

    double ball_played ;
    double expected_run_rate;
    double current_run_rate;
    
    
   

    // calculation starts here 
    ball_played = 300 - ball ; //cause 6 * 50 = 300
    current_run_rate = (current_run_of_batsman / ball_played) *6*1.0;
    
    if (total_run_of_opponents < current_run_of_batsman){
        expected_run_rate = 0.00;
    }
    else{
        expected_run_rate = ((total_run_of_opponents*1.0 - current_run_of_batsman+1)/ball*1.0)*6*1.0;
    }

    
        

    
    
    
    
   /*
   problemic test case :  when, oppenent run < current batshamn run
        1
        100 200 100
   */

    

    // debugging presentaiton
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