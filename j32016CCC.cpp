#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to check whether string is palindrome
string isPalindrome(string S) {
    int n = S.length();
    for (int i = 0; i < n / 2; ++i) {
        if (S[i] != S[n - i - 1]) {
            return "No";
        }
    }
    return "Yes";
}

// Driver Code
int main() {
    string S;
    cin >> S; // making it user inputted
    cout << isPalindrome(S) << endl;
    return 0;
}
