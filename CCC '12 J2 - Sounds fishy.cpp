#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int x, y, z, a;
  cin >> x;
  cin >> y;
  cin >> z;
  cin >> a;
if( x == y|| y == z|| z == a){
  cout << "Fish At Constant Depth";
}
else if(x < y|| y < z|| z < x|| x < a){
  cout << "Fish Rising";
}
  
else if(x > y|| y > z|| z > x|| x > a){
  cout << "Fish diving";
}
  else{ 
  cout << "No Fish";
  }
}
