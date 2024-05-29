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

    // Find the largest explosion
    int max_explosion = *max_element(v.begin(), v.end());

    // Calculate the sum of all explosions
    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        total_sum += v[i];
    }

    // Count the occurrences of the largest explosion
    int max_count = count(v.begin(), v.end(), max_explosion);

    // Calculate the sum excluding one occurrence of the largest explosion
    int sum_excluding_one_max = total_sum - max_explosion;

    // Calculate the count of elements excluding one occurrence of the largest explosion
    int count_excluding_one_max = n - 1;

    // Calculate the average excluding one occurrence of the largest explosion
    double average = static_cast<double>(sum_excluding_one_max) / count_excluding_one_max;

    // Output the result
    cout << average;

    return 0;
}
