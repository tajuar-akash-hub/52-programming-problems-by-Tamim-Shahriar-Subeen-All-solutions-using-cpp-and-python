#include <bits/stdc++.h>
using namespace std;
int main()
{
  
  vector<string> v;

  int test;
  cin >> test;

  while (test--)
  {

    string number_in_string;
    for (int i = 0; i < 4; i++)
    {
      cin >> number_in_string;
      v.push_back(number_in_string);
    }

    cout << endl;
  }
  cout << "outputs are :";

  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }


}