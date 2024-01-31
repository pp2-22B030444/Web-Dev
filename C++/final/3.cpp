#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    char t;
    cin >> s>> t;
    for(int i=0; i<s.size(); i++){
        if(s[i]==t){
            cout << i;
            return 0;
        }
    }
}