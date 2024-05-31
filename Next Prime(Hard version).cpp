#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true; // 2 and 3 are prime numbers
    if (n % 2 == 0 || n % 3 == 0) return false; // eliminate multiples of 2 and 3
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

// Function to find the smallest prime number greater than or equal to n
int findNextPrime(int n) {
    while (!isPrime(n)) {
        n++;
    }
    return n;
}

int main() {
    int n;
    cin >> n;
    cout << findNextPrime(n) << endl;
    return 0;
}
