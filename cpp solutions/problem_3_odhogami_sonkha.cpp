#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    for(int i=1000;i>=1;i--)
    {
        count++;
        cout<<i<<" \t";
        if (count==5){
            cout<<"\n";
            count= 0;
        }

    }

}