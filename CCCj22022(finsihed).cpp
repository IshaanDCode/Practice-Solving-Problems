#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // Total number of players

    int points, fouls;
    int count_greater_than_40 = 0;
    bool is_gold_team = true;

    for (int i = 0; i < n; ++i) {
        cin >> points >> fouls;  // Read points and fouls for each player
        int star_rating = points * 5 - fouls * 3;

        if (star_rating > 40) {
            count_greater_than_40++;
        } else {
            is_gold_team = false;
        }
    }

    cout << count_greater_than_40;
    if (is_gold_team) {
        cout << "+";
    }
    cout << endl;

    return 0;
}
