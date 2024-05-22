#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve(){
    int a;
    int b;
    int c;
    cin >> a;
    cin >> b;
    cin >> c;
    int a1;
    int b2;
    int c3;
    cin >> a1;
    cin >> b2;
    cin >> c3;
    int total1 = 0;
    int total2 = 0;
    if(a > a1){
        total1 = total1 + 1; 
    }
    else if(a < a1){
        total2 = total2 + 1;
    }
    if(b > b2){
        total1 = total1 + 1; 
    }
    else if(b < b2){
        total2 = total2 + 1;
    }
    if(c > c3){
        total1 = total1 + 1; 
    }
    else if(c < c3){
        total2 = total2 + 1;
    }
    cout << total1 << " ";
    cout << total2;

}
int main(){
    solve();
}