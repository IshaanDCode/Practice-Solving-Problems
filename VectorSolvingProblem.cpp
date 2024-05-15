#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> arr;
    int x;
    for (int i = 0; i < N; i++) {
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
