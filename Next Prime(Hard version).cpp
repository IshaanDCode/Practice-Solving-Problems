#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false; // 0 and 1 are not prime numbers
    if (n <= 3) return true; // 2 and 3 are prime numbers
    if (n % 2 == 0 || n % 3 == 0) return false; // eliminate multiples of 2 and 3
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

// Function to find the smallest prime number greater than or equal to n
int findNextPrime(int n) {
    if (n <= 2) return 2; // The smallest prime number is 2
    if (n % 2 == 0) n++; // If n is even, start from the next odd number
    while (!isPrime(n)) {
        n += 2; // Check only odd numbers
    }
    return n;
}

int main() {
    int n;
    cin >> n;
    cout << findNextPrime(n) << endl;
    return 0;
}
