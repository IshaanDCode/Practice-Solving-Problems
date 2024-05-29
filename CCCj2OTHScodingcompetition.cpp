#include <iostream>
#include <vector>
#include <algorithm> // For max_element
using namespace std;

int main() {
    int n;
    cin >> n; // number of explosions

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i]; // input the size of each explosion
    }

    if (n == 1) {
        // If there's only one explosion, we cannot exclude any explosion.
        cout << 0;
        return 0;
    }

    // Find the largest explosion
    int max_explosion = *max_element(v.begin(), v.end());

    // Calculate the sum of all explosions
    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        total_sum += v[i];
    }

    // Calculate the sum excluding the largest explosion
    int sum_excluding_max = total_sum - max_explosion;

    // Calculate the count of elements excluding the largest explosion
    int count_excluding_max = n - 1;

    // Calculate the average excluding the largest explosion and round down to the nearest integer
    int average = sum_excluding_max / count_excluding_max;

    // Output the result
    cout << average;

    return 0;
}
