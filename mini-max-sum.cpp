#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr[5]; // Declaring an array of vectors
    for (int i = 0; i < 5; i++) { // Corrected loop starting index
        int n;
        cin >> n;
        arr[i].push_back(n); // Corrected pushing into the ith vector
    }
    for(int j = 0; j < 5; j++){
         cout << arr[j][0] << endl; // Accessing and printing the first element of the ith vector
    }
    return 0; // Added return statement to indicate successful completion
}
