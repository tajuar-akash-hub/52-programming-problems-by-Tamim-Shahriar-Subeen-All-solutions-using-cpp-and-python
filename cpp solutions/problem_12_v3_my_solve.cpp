#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int count = 0;
        int n ; cin>>n;

        for (int i = 5; i <= n; i *= 5)
        {
            count += n / i;
        }
        cout << count<<endl;
    }
}