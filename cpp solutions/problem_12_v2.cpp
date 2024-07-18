#include <bits/stdc++.h>
using namespace std;

// Function to count trailing zeros in factorial of a number
int countTrailingZeros(int n) {
    int count = 0;
    // Keep dividing n by powers of 5 and update count
	
    for (int i = 5; n / i >= 1; i *= 5) {
        count += n / i;
    }
    return count;
}

int main() {
    int test;
    cin >> test; // Read the number of test cases
    while (test--) {
        int n;
        cin >> n; // Read the value of N for each test case
        cout << countTrailingZeros(n) << endl; // Print the number of trailing zeros in N!
    }
    return 0;
}
