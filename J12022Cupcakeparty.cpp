#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int b; //big boxes
  int s; //small boxes
  cin >> b;
  cin >> s;
  int total;
  total = b * 8 + s * 3;
  cout << total - 28;
  
}
