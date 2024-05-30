#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Helper function to expand around the center and return the length of the palindrome
int expandAroundCenter(const string &s, int left, int right) {
    while (left >= 0 && right < s.length() && s[left] == s[right]) {
        left--;
        right++;
    }
    return right - left - 1;
}

// Function to find the length of the longest palindromic substring
int longestPalindromeLength(const string &s) {
    if (s.empty()) {
        return 0;
    }
    
    int maxLength = 1;  // Every single character is a palindrome of length 1
    
    for (int i = 0; i < s.length(); i++) {
        int len1 = expandAroundCenter(s, i, i);        // Odd length palindrome
        int len2 = expandAroundCenter(s, i, i + 1);    // Even length palindrome
        int len = max(len1, len2);
        
        maxLength = max(maxLength, len);
    }
    
    return maxLength;
}

int main() {
    string str;
    cin >> str;
    
    int result = longestPalindromeLength(str);
    cout << result << endl;
    
    return 0;
}
