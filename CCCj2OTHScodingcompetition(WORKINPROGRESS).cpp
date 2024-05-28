#include <iostream>
#include <vector>
#include <numeric> // For accumulate
using namespace std;

int main(){
    int n;
    cin >> n; // number of explosions

    vector<float> v;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    int sum = accumulate(v.begin(), v.end(), 0.0);
    cout << sum / v.size();

    return 0;
}
