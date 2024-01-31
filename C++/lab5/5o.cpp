#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >>s;
    sort (s.begin(), s.end());
    for (int i=s.length()-1; i>0; i--){
        if ('a'<=s[i] && s[i]<='z'){
           cout << s[i];
           return 0;
        }
    }}