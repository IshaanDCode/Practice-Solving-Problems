#include <iostream>
#include <iomanip>  // Include iomanip for setprecision and fixed
using namespace std;

int main() {
    double x;
    cin >> x;
    double total = x + (x - 2);
    double z = total / 2;
    

    // Set the precision and format output
    cout << fixed << setprecision(2);
    cout << z << endl;
    //Compilation errors.
    return 0;
}
