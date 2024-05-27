#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a;
    int b;
    int total;
    cin >> a;
    cin >> b;
    if (a == 0) {
        cout << 0;
    }
    else if (b == 0) {
        cout << 0;
    } 
    else {
        total = a + b;
        cout << total;
    }
}
