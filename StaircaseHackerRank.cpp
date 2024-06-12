#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
 int szam;
cin >> szam;
for (int i = 0; i < szam; i++) {

    for (int j = 0; j < szam; j++) {
        cout << (j < szam-i-1 ? ' ' : '*');
    }

    cout << endl;
}
}
