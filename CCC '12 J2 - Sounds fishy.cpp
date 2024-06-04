#include <iostream>
using namespace std;

int main() {
    int x, y, z, a;
    cin >> x >> y >> z >> a;
    
    if (x == y && y == z && z == a) {
        cout << "Fish At Constant Depth";
    } else if (x < y && y < z && z < a) {
        cout << "Fish Rising";
    } else if (x > y && y > z && z > a) {
        cout << "Fish Diving";
    } else {
        cout << "No Fish";
    }

    return 0;
}
//code has executed with help from stack overflow
