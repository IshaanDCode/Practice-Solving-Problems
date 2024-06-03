#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> arr{"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"}; // Trying to simplyfy the code
    int a, b;
    cin >> a >> b;
    for(int i = a; i <= b; ++i) {
        if(i > 9) cout << (i % 2 == 0 ? "even" : "odd") << endl;
        else cout << arr[i] << endl;
    }
    return 0;
}
