#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n;
    cin >>n;
    while (n--){
    for (int i=0; i<s.size();i++){
        if (s[i]>'A' && s[i]<='Z'){
        s[i]=s[i]-1;}
    else if (s[i]=='A'){
        s[i]='Z';
    }}}
    cout << s;}