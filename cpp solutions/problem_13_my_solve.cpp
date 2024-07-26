// initial problem was with count number of words

#include <bits/stdc++.h>
using namespace std;

long long int factorial(long long int number)
{

    for (int i = number - 1; i >= 1; i--)
    {
        number = number * i;
    }

    return number;
}

// taking repeated word to our variable for the equation
long long int repeated_word_count_factorial(int counted_word[10])
{
    long long int repeated_word_factorial = 1; // if that is 0 then would be a problemn

    for (int i = 0; i < 10; i++)
    {
        if (counted_word[i] > 1)
        {
            repeated_word_factorial = repeated_word_factorial * factorial(counted_word[i]);
        }
    }

    return repeated_word_factorial;
}

void distinct_word_(const vector<string> &v, vector<string> &distinct_word)
{
    for (int i = 0; i < v.size(); i++)
    {
        int flag = 0;

        for (int j = 0; j < i; j++)
        {
            if (distinct_word[j] == v[i])
            {
                flag = 1;
            }
        }

        if (flag == 0)
        {
            distinct_word.push_back(v[i]);
        }
    }
}

void count_words(const vector<string> &v, int counted_word[10], const vector<string> distinct_word)
// what is const vector<string> &v??
{

    for (int i = 0; i < distinct_word.size(); i++)
    {
        // outer loop for distint word

        for (int j = 0; j < v.size(); j++)
        // inner loop for main vector which holds the input
        // j = i explanation below
        /*
        j = i means after every iteration increasing index of array by 1
        cz we already counted that word
        */
        {
            if (distinct_word[i] == v[j])
            {
                counted_word[i]++;
            }
        }
    }
    // cout<<"printing count word"<<endl;
    // for(int i=0;i<10;i++){
    //     cout<<counted_word[i]<<" ";
    // }
}

int main()
{
    int test;
    cin >> test;
    cin.ignore();

    while (test--)
    {
        string sentence;
        string word;
        vector<string> v;
        vector<string> distinct_word;
        int counted_word[10] = {0};

        getline(cin, sentence);

        stringstream ss(sentence);

        while (ss >> word)
        {
            v.push_back(word);
        }

        // distinct word
        distinct_word_(v, distinct_word);

        // printing distinct word
        // for (int i = 0; i < distinct_word.size(); i++)
        // {
        //     cout << distinct_word[i] << " ";
        // }

        // count words
        count_words(v, counted_word, distinct_word);

        long long int repeated_word_factorial = repeated_word_count_factorial(counted_word);
        // passing this array to function

        long long int factorial_of_total_words = factorial(v.size());

        // main equation
        long long int equation_of_permutation = factorial_of_total_words / repeated_word_factorial;

        cout << "1/" << equation_of_permutation << endl;
        // cout << factorial_of_total_words << endl;
    }
}