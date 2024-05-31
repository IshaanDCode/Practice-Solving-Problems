#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    int y;
    if (x == 0) {
        y = -2;
    } else if (x % 2 == 0) {
        y = x - 2;
    } else {
        y = x - 1;
    }
    cout << y << endl;
    return 0;
}
