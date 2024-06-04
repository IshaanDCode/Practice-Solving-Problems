#include <iostream>
using namespace std;

int main() {
    int speed_limit, recorded_speed;

    cin >> speed_limit >> recorded_speed;

    if (recorded_speed <= speed_limit) {
        cout << "Congratulations, you are within the speed limit!" << endl;
    } else {
        if (recorded_speed - speed_limit <= 20) {
            cout << "You are speeding and your fine is $100." << endl;
        } else if (recorded_speed - speed_limit <= 30) {
            cout << "You are speeding and your fine is $270." << endl;
        } else {
            cout << "You are speeding and your fine is $500." << endl;
        }
    }

    return 0;
}
