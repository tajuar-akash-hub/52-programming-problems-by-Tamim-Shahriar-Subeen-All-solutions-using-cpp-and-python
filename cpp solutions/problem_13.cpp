#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test; 
    cin >>test; 
    cin.ignore();  //after test value there is a empty space, 
    // our word maybe taking that as a input
    
    while(test--){
        string word;
        getline(cin,word); // to take input with spaces
        
        stringstream ss(word);
        string new_word;
        int count = 0;
        //count the total word
        while(ss >> new_word){
            count++;
        }
        
        cout<<"count = "<<count;
        cout<<endl;
    }

    
}