#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> x;
    int v = 0;
    for(int i = 0; i < n; i++){
        cin >> v;
        x.push_back(v);
    }
    sort(x.begin(), x.end());
    unique(x.begin(), x.end());
    for(int j = 0; j < n; j++){
        cout << x[j];
    }
    
}
 