#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n; 
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        cout<<endl;
    }
}