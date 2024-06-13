#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr; 
    for (int i = 0; i < 5; i++) { 
        int n;
        cin >> n;
        arr.push_back(n); 
    }
    sort(arr.begin(), arr.end());
    int largestSum = arr[4] + arr[3];
    int smallestSum = arr[0] + arr[1];
    cout << endl << smallestSum << " " << e;
    return 0; 
}
