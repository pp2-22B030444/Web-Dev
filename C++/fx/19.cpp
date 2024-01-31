#include <bits/stdc++.h>
#include <string>
using namespace std;
int main (){
    int s;
    cin>>s;
    for (int i=2; i<s;i++){
        if (s%i==0){
            cout << "no";
            return 0;
        }
    }
            cout << "prime";
            return 0;
        
    
    }