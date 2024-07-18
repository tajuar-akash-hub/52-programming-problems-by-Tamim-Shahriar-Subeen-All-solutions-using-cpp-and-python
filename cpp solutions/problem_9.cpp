#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--){
        int number ;
        cin>> number;
        //main code
        int rounded_root = sqrt(number);
        if (rounded_root * rounded_root == number){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
    }
    
}










// //easy and convetional solution , but may be incorrect , due to computer lacking 
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     float rooted;
//     int round_rooted;
//     int test;
//     cin>>test;
//     while(test--){
//         int number ;
//         cin>> number;
//         //main code
//         rooted = sqrt(number);
//         round_rooted= sqrt(number);
//         // cout<< rooted -round_rooted;
//         if (rooted - round_rooted == 0){
//             cout<<"YES";
//         }
//         else{
//             cout<<"NO";
//         }
        
//         cout<<endl;
//     }

    
// }