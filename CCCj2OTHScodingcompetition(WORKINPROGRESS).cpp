#include <iostream>
#include <vector>
#include <numeric> // For accumulate
#include <algorithm> // For max_element
using namespace std;

int main() {
    int n;
    cin >> n; // number of explosions

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i]; // input the size of each explosion
    }

    // Find the largest explosion
    int max_explosion = *max_element(v.begin(), v.end());

    // Calculate the sum excluding the largest explosion
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] != max_explosion) { // check if the current element is not the largest explosion
            sum += v[i];
        }
    }

    // Adjust for the case where the largest explosion occurs multiple times
    int count = n - count(v.begin(), v.end(), max_explosion) + 1;

    // Calculate the average excluding the largest explosion
    int average = sum / (n - 1);

    // Output the result
    cout << average;

    return 0;
}
