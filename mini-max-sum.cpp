#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    vector<int> arr[5]; 
    for (int i = 0; i < 5; i++) { 
        int n;
        cin >> n;
        arr[i].push_back(n); 
    }
    sort(begin(arr), end(arr));
    for(int j = 1; j < 5; j++){
        cout << arr[j][0];
    }
    return 0; 
}
