#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int x;
  int y;
  cin  >> x;
  cin >> y;
  int z = y + 20;
  int r = z + 30;
  int q = r + 31;
  if (y >= x){
    cout << "Congratulations, you are within the speed limit!";
}
  else if(x < z){
    cout << "You are speeding and your fine is $100.";
  }
  else if(x < r){
    cout << "You are speedindg and your fine is $270.";
  }
  else if(x < q){
    cout << "You are speeding and your fine is $500.";
  }
}
