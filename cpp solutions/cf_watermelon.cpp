#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number;

    cin >> number;

    if (number % 2 == 0 && number!=0 && number>0 && number>2)
    {
        cout << "YES";
    }
    else if (number<0){
        cout<<"NO";
    }
    else if(number==0){
        cout<<"NO";
    }
    else
    {
        cout << "NO";
    }
    
}