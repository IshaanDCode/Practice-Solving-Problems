#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x;
    cin >> x;

    vector<int> n;
    for(int i = 0; i < x; i++){
        int y;
        cin >> y;
        n.push_back(y);
    }

    reverse(n.begin(), n.end());

    for(int j = 0; j < n.size(); j++){
        cout << n[j] << " ";
    }

    return 0;
}
