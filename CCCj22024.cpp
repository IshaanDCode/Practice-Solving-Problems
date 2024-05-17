#include <iostream>
using namespace std;

int main() {
    int D;
    cin >> D;
    int size = D;

    while (true) {
        int Yobi;
        cin >> Yobi;

        if (Yobi < size) {
            size += Yobi;
        } else {
            break;
        }
    }

    cout << size << endl;

    return 0;
}