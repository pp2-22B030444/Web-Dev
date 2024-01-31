#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main(){
    string s;
    cin >> s;
    int min=1e9, max=-1e9;
    for(int i=0; i<s.size(); i++){
        if(s[i]-'0'>max){
            max=s[i]-'0';
        }
        if(s[i]-'0'<min){
            min=s[i]-'0';
        }
    }
    cout << max << " " << min;
}