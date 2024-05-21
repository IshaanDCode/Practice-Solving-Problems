#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void solve(){
    while(true){
        int n;
        cin >> n;
        vector<string> arr = {"one", "two","three","four", "five","six", "seven","eight", "nine", "ten"};

        if(n == 1){
        cout << arr[0] << endl;
        }
        else if(n == 2){
        cout << arr[1] << endl;
        }
        else if(n == 3){
        cout << arr[2] << endl;
        }
        else if(n == 4){
        cout << arr[3] << endl;
        }
        else if(n == 5){
        cout << arr[4] << endl;
        }
        else if(n == 6){
        cout << arr[5] << endl;
        }
        else if(n == 7){
        cout << arr[6] << endl;
        }
        else if(n == 8){
        cout << arr[7] << endl;
        }
        else if(n == 9){
        cout << arr[8] << endl;
        }
        else{
        cout << "score is greater than 9"; 
        }
    }
} 
int main(){
    solve();
}