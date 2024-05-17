#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Solve1(){
    string n1;
    string n2;
    char c1;
    char c2;
    char c3;
    
    cin >> n1;
    cin >> n2;
    string combine;
//silly key
    for (int i=0; i<n1.length() ; i++)
    {
        
        if(n1[i] != n2[i]){
            if(n2[i] == '\0')
            {
                c3 = n1[i];
                
            }
            else if (n2[i] == n1[i]){
                cout << "\n-";
            }
            else if(n2[i] != n1[i]){
                cout << "\n-";
            }

            else{
                c1 = n1[i];
                c2 = n2[i];
            }
        }
    }
    
    cout << c1 << " " << c2 << endl;
    cout << c3 << endl; 
}



int main(){
    Solve1();
}
