#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int x;
  int y;
  cin  >> x;
  cin >> y;
  int z;
  z = y;
  if (x >= y){
    cout << "Congratulations, you are within the speed limit!";
  }
  else if(x < y + 20){
    cout << "You are speeding and your fine is $500.";
  }
}
